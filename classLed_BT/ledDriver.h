#pragma once
#ifndef ledDriver_h
#define ledDriver_h

#include "Arduino.h" 

class ledDriver {
private:
    int ledPin;
public:
    /*
    * @brief drive the LEDs
    * @param pin connect to LED 
    * @return 
    */
    ledDriver(int ledSetPin);
    void init();
    void turnOn();
    void turnOff();
    bool isOn();
};


#endif