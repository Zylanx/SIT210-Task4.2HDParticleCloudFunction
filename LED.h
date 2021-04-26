#ifndef MATT_LED_H
#define MATT_LED_H


class LED {
    int _pin;
    bool _pin_state;
    
public:
    LED(int pin);
    void toggle();
};


#endif