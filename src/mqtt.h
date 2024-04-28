
#ifndef MQTT_H
#define MQTT_H

#include <Arduino.h>

//#define MQTT_HOST IPAddress(192, 168, 42, 10)
//#define MQTT_PORT 1883

void setupMQTT();
void loopMQTT();
bool getMQTTState();
#endif /*MQTT_H*/
