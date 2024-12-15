#include <Arduino.h>
#include <time.h>
#include <esp32_smartdisplay.h>
#include <ui/ui.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <AsyncTCP.h>
#include "mqtt.h"
#include "secrets.h"
#include "main.h"

const char* ssid = WIFI_SSID;
const char* password = WIFI_PASSWORD;
const char* deviceName = DEVICE_NAME;
const char* hostname = WIFI_HOSTNAME;
auto lv_last_tick = millis();
bool _drawPowerSlider;
bool _drawSocSlider;

#ifdef LOCAL_IP
// Set your Static IP address
IPAddress local_IP(LOCAL_IP);
// Set your Gateway IP address
IPAddress gateway(GATEWAYY);

IPAddress subnet(SUBNET);
IPAddress primaryDNS(PRIMARY_DNS);   //optional
IPAddress secondaryDNS(SECONDARY_DNS); //optional
#endif

void setup() {
  // Configures static IP address
#ifdef LOCAL_IP
  if (!WiFi.config(local_IP, gateway, subnet, primaryDNS, secondaryDNS)) {
    Serial.println("STA Failed to configure");
  }
#endif
  WiFi.hostname(hostname);      // DHCP Hostname (useful for finding device for static lease)
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(300);
  }
  if (WiFi.status() == WL_CONNECTED) {
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    delay(300);
  }

#ifdef ARDUINO_USB_CDC_ON_BOOT
    delay(5000);
#endif
    Serial.begin(115200);
    Serial.setDebugOutput(true);
    log_i("Board: %s", BOARD_NAME);
    log_i("CPU: %s rev%d, CPU Freq: %d Mhz, %d core(s)", ESP.getChipModel(), ESP.getChipRevision(), getCpuFrequencyMhz(), ESP.getChipCores());
    log_i("Free heap: %d bytes", ESP.getFreeHeap());
    log_i("Free PSRAM: %d bytes", ESP.getPsramSize());
    log_i("SDK version: %s", ESP.getSdkVersion());

    smartdisplay_init();

    __attribute__((unused)) auto disp = lv_disp_get_default();
    // lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_180);
    // lv_disp_set_rotation(disp, LV_DISP_ROT_270);

    ui_init();

    setupMQTT();
}

void loop() {
    loopMQTT();
    // Update the UI
    if (_drawPowerSlider)
    {
        _drawPowerSlider = false;
        drawPowerSlider();
    }
    if (_drawSocSlider)
    {
        _drawSocSlider = false;
        drawSocSlider();
    }
    lv_timer_handler();
    auto const now = millis();
    // Update the ticker
    lv_tick_inc(now - lv_last_tick);
    lv_last_tick = now;
    delay(5); /* let this time pass */
}

float _pvPower = 0;
float _gridPower = 0;
int _vehicleSoc = 0;
int _chargeDuration = 0;
int _chargedEnergy = 0;
int _chargePower = 0;
bool _charging = false;
float _batSoc = 0;

void drawPowerSlider() {
    char buf[30];
    int pvPercent;
    int pwPercent;
    float powerSum;
    float gridPowerAbs = abs(_gridPower);
    powerSum = gridPowerAbs + _pvPower;
    if (_pvPower <= 0)
    {
        pvPercent = 0;
        pwPercent = 100;
    } else if (gridPowerAbs == 0) {
        pvPercent = 0;
        pwPercent = 100;
    } else {
        if (powerSum <= 0) {
            pvPercent = 0;
        } else {
            pvPercent = (int) ((_pvPower / powerSum) * 100);
        }
        pwPercent = 100 - pvPercent;
    }
    // 
    if (pvPercent <= 0)
    {
        pvPercent = 0;
    } else {
        lv_obj_set_width(ui_PanelSolar, lv_pct(pvPercent));
    }
    
    int pvInt = (int) _pvPower;
    if (pvInt > 0)
    {
        sprintf(buf,"%d",pvInt);
        lv_label_set_text(ui_LabelSolar, buf);
    }
    
    //
    lv_color_t bg_color;
    if (_gridPower < 0)
    {
        bg_color = lv_color_hex(0xffff00);
    } else {
        bg_color = lv_color_hex(0x0000FF);
    }   
    lv_obj_set_style_bg_color(ui_PanelUsing, bg_color, LV_PART_MAIN);

    lv_obj_set_width(ui_PanelUsing, lv_pct(pwPercent));
    if (gridPowerAbs > 0)
    {
        int pwInt = (int) gridPowerAbs;
        sprintf(buf,"%d",pwInt);
        lv_label_set_text(ui_LabelUsing, buf);
    }
}

void drawSocSlider() {
    char buf[30];
    int restPercent = 100 -  _vehicleSoc;

    lv_obj_set_width(ui_PanelSoc, lv_pct(_vehicleSoc));
    sprintf(buf,"%d%%",_vehicleSoc);
    lv_label_set_text(ui_LabelSoc, buf);
    lv_color_t bg_color;
    if (_charging)
    {
        bg_color = lv_color_hex(0xffff00);
    } else {
        bg_color = lv_color_hex(0x07E179);
    }
    lv_obj_set_style_bg_color(ui_PanelSoc, bg_color, LV_PART_MAIN);
    if (restPercent <= 0)
    {
        restPercent = 0;
    }    
    lv_obj_set_width(ui_PanelMax, lv_pct(restPercent));
    float power = _chargePower;
    if (_chargePower > 0)
    {
        power = _chargePower / 1000.0;
    }
    
    sprintf(buf, "%.1fkW", power);
    lv_label_set_text(ui_chargeLbl, buf);
    float soc = _batSoc;
    sprintf(buf, "%.1f%%", soc);
    lv_label_set_text(ui_chargeLbl1, buf);

}

void set_pvPower(float power) {
    _pvPower = power;
    _drawPowerSlider = true;
}
void set_gridPower(float power) {
    _gridPower = power;
    _drawPowerSlider = true;
}
void set_vehicleSoc( int soc) {
    _vehicleSoc = soc;
    _drawSocSlider = true;
}

void set_charging(bool state ) {
    _charging = state;
    _drawSocSlider = true;
}

void set_chargePower( int chargePower ){
    _chargePower = chargePower;
    _drawSocSlider = true;
}
void set_batSoc(float newSoc) {
    _batSoc = newSoc;
    _drawSocSlider = true;
}

