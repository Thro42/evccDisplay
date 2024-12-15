#include <AsyncMqttClient.h>
//#include <ArduinoJson.h>
#include "mqtt.h"
#include "main.h"
#include "secrets.h"

#include <WiFi.h>
extern "C" {
	#include "freertos/FreeRTOS.h"
	#include "freertos/timers.h"
}

TimerHandle_t mqttReconnectTimer;
bool mqttOnline;
char buffer[2048];
AsyncMqttClient mqttClient;
// DynamicJsonDocument doc( 2048 ); // _INIT_N(((2048)));
 TimerHandle_t watchDogTimer;

void watchDogRestart() {
  if(!mqttOnline) {
    Serial.println("Restart Node...");
    esp_restart() ;
  }
}

void connectToMqtt() {
  Serial.println("Connecting to MQTT...");
  mqttClient.connect();
}

bool pub(const char *topic, uint8_t qos, bool retain, const char *payload, size_t length = 0, bool dup = false, uint16_t message_id = 0)
{
    for (int i = 0; i < 10; i++)
    {
        if (mqttClient.publish(topic, qos, retain, payload, length, dup, message_id))
            return true;
        delay(25);
    }
    return false;
}

void onMqttConnect(bool sessionPresent) {
  Serial.println("Connected to MQTT.");
  Serial.print("Session present: ");
  Serial.println(sessionPresent);
  mqttOnline = true;
  xTimerStop(mqttReconnectTimer, 0);
  mqttClient.subscribe("evcc/site/pvPower", 0);
  mqttClient.subscribe("evcc/site/gridPower", 0);
  mqttClient.subscribe("evcc/loadpoints/1/vehicleSoc", 0);
  mqttClient.subscribe("evcc/loadpoints/1/charging", 0);
  mqttClient.subscribe("evcc/loadpoints/1/chargePower", 0);
  mqttClient.subscribe("evcc/site/batterySoc", 0);
  // evcc/loadpoints/1/chargeDuration
  // evcc/loadpoints/1/chargedEnergy
  // evcc/loadpoints/1/chargePower
}

void onMqttDisconnect(AsyncMqttClientDisconnectReason reason) {
  mqttOnline = false;
  Serial.println("Disconnected from MQTT.");
  if (WiFi.isConnected()) {
    Serial.println("Start Timer.");
    xTimerStart(mqttReconnectTimer, 10);
  } else {
    Serial.println("Start Timer.");
    xTimerStart(mqttReconnectTimer, 100);
  }
}

void onMqttMessage(char* topic, char* payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total) {

  xTimerReset(watchDogTimer, 15000);
  char p_buf[20];
  Serial.print("Publish received: ");
  Serial.println(topic);
  for(int i=0; i<len; i++) {
    p_buf[i] = payload[i];
  }
  p_buf[len] = 0;
  // Serial.println(p_buf);

  if(strcmp(topic,"evcc/site/pvPower") == 0)
  {
    float pvPower = atof(payload);
    set_pvPower(pvPower);
    Serial.println(pvPower);
  }
  if(strcmp(topic,"evcc/site/gridPower") == 0)
  {
    float gridPower = atof(payload);
    set_gridPower(gridPower);
    Serial.println(gridPower);
  }
  if(strcmp(topic,"evcc/loadpoints/1/vehicleSoc") == 0)
  {
    char buf[10];
    int vehicleSoc = atoi(p_buf);
    sprintf(buf, "%d%%", vehicleSoc);
    Serial.println( buf );
    set_vehicleSoc( vehicleSoc );
    Serial.println(buf);
  }
  if(strcmp(topic,"evcc/loadpoints/1/charging") == 0)
  {
    if(strcmp(p_buf,"true") == 0) {
      Serial.println( "true" );
      set_charging( true );
    } else {
      Serial.println( "false" );
      set_charging( false );
    }
  }  
  if(strcmp(topic,"evcc/loadpoints/1/chargePower") == 0)
  {
    char buf[10];
    int chargePower = atoi(p_buf);
    sprintf(buf, "%d W", chargePower);
    Serial.println( buf );
    set_chargePower( chargePower );
    Serial.println(buf);
  }
// Battery SOC
  if(strcmp(topic,"evcc/site/batterySoc") == 0)
  {
    float batSoc = atof(payload);
    set_batSoc(batSoc);
    Serial.println(batSoc);
  }
}

void onMqttSubscribe(uint16_t packetId, uint8_t qos) {
  Serial.println("Subscribe acknowledged.");
  Serial.print("  packetId: ");
  Serial.println(packetId);
  Serial.print("  qos: ");
  Serial.println(qos);
}

void onMqttUnsubscribe(uint16_t packetId) {
  Serial.println("Unsubscribe acknowledged.");
  Serial.print("  packetId: ");
  Serial.println(packetId);
}

void setupMQTT()
{
  mqttOnline = false;
  mqttReconnectTimer = xTimerCreate("mqttTimer", pdMS_TO_TICKS(2000), pdFALSE, (void*)0, reinterpret_cast<TimerCallbackFunction_t>(connectToMqtt));
  watchDogTimer = xTimerCreate("watchDogTimer", pdMS_TO_TICKS(150000), pdFALSE, (void*)0, reinterpret_cast<TimerCallbackFunction_t>(watchDogRestart));
  mqttClient.onConnect(onMqttConnect);
  mqttClient.onDisconnect(onMqttDisconnect);
  mqttClient.onSubscribe(onMqttSubscribe);
  mqttClient.onUnsubscribe(onMqttUnsubscribe);
  mqttClient.onMessage(onMqttMessage);
//  mqttClient.onPublish(onMqttPublish);
  mqttClient.setClientId("evccDisplay");
  mqttClient.setServer(MQTT_HOST, MQTT_PORT);
  mqttClient.connect();
}

void loopMQTT()
{

}

bool getMQTTState( void ) {
 return mqttOnline;
}