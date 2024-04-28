#include <Arduino.h>

#include <esp32_smartdisplay.h>
#include <ui/ui.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <AsyncTCP.h>
#include "mqtt.h"
#include "secrets.h"

const char* ssid = WIFI_SSID;
const char* password = WIFI_PASSWORD;
const char* deviceName = DEVICE_NAME;
const char* hostname = WIFI_HOSTNAME;

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

    lv_timer_handler();
}

float _pvPower = 0;
float _gridPower = 0;
int _vehicleSoc = 0;
int _chargeDuration = 0;
int _chargedEnergy = 0;
int _chargePower = 0;
bool _charging = false;

void drawPowerSlider() {
    char buf[10];
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
        pvPercent = (int) ((_pvPower / powerSum) * 100);
        pwPercent = 100 - pvPercent;
    }
    // 
    lv_obj_set_width(ui_PanelSolar, lv_pct(pvPercent));
    int pvInt = (int) _pvPower;
    sprintf(buf,"%d",pvInt);
    lv_label_set_text(ui_LabelSolar, buf);
    //
    if (_gridPower < 0)
    {
        lv_obj_set_style_bg_color(ui_PanelUsing, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    } else {
        lv_obj_set_style_bg_color(ui_PanelUsing, lv_color_hex(0x0000FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    }   
    lv_obj_set_width(ui_PanelUsing, lv_pct(pwPercent));
    int pwInt = (int) gridPowerAbs;
    sprintf(buf,"%d",pwInt);
    lv_label_set_text(ui_LabelUsing, buf);

}

void drawSocSlider() {
    char buf[20];
    int restPercent = 100 -  _vehicleSoc;

    lv_obj_set_width(ui_PanelSoc, lv_pct(_vehicleSoc));
    sprintf(buf,"%d%%",_vehicleSoc);
    lv_label_set_text(ui_LabelSoc, buf);
    if (_charging)
    {
        lv_obj_set_style_bg_color(ui_PanelSoc, lv_color_hex(0xFFFF00), LV_PART_MAIN | LV_STATE_DEFAULT);
    } else {
        lv_obj_set_style_bg_color(ui_PanelSoc, lv_color_hex(0x07E179), LV_PART_MAIN | LV_STATE_DEFAULT);
    }
    lv_obj_set_width(ui_PanelMax, lv_pct(restPercent));
    float power = _chargePower;
    if (_chargePower > 0)
    {
        power = _chargePower / 1000.0;
    }
    
    sprintf(buf, "%.1f kW", power);
    lv_label_set_text(ui_chargeLbl, buf);

}

void set_pvPower(float power) {
    _pvPower = power;
    drawPowerSlider();
}
void set_gridPower(float power) {
    _gridPower = power;
    drawPowerSlider();
}
void set_vehicleSoc( int soc) {
    _vehicleSoc = soc;
    drawSocSlider();
}

void set_charging(bool state ) {
    _charging = state;
    drawSocSlider();
}

void set_chargePower( int chargePower ){
    _chargePower = chargePower;
    drawSocSlider();
}
