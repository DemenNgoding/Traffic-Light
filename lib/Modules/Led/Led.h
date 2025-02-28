#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led {
public:
    Led(int pin);
    
    void begin();
    void on(int delay);
    void off();

private:
    int _pin;
    int _delay;
};

#endif // !LED_H
