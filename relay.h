#ifndef __RELAY_H
#define __RELAY_H

#include  "Arduino.h"

#define RELAY_PIN 8

extern unsigned long previous_time;
extern const long interval;
extern bool relayState;

void relay_init();

#endif
