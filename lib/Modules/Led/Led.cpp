#include "Led.h"

Led::Led(int pin): _pin(pin), _delay(0) {}

void Led::begin() {
    pinMode(_pin);
    off();
}

void Led::on(int _delay) {
    digitalWrite(_pin, HIGH);
}

void Led::off() {
    digitalWrite(_pin, LOW);
}
