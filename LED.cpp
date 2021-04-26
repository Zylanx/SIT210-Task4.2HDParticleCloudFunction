#include "Particle.h"

#include "LED.h"


LED::LED(int pin) {
    _pin = pin;
    _pin_state = false;
}


void LED::toggle() {
    _pin_state = !_pin_state;
    digitalWrite(_pin, _pin_state);
}