#pragma once
#ifndef _LEDDRIVER_H_
#define _LEDDRIVER_H_

#include "Arduino.h" 

class ledDriver {
private:
    uint8_t PIN_LED;
public:
    ledDriver(uint8_t led_setPin);
    void init();
    void turnOn();
    void turnOff();
    bool isOn();
};


#endif
