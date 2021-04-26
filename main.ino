#include "Particle.h"

#include "LED.h"


// Okay as a side note, no I will not be making a traffic light with a blue light. Who designed this assignment???


// Pin Definitions
#define RED_LED D2
#define ORANGE_LED D3
#define GREEN_LED D4


// Led objects
LED redLed = LED(RED_LED);
LED orangeLed = LED(ORANGE_LED);
LED greenLed = LED(GREEN_LED);


// Function Definition
int changeLed(String data);


void setup() {
    // Set the pin modes of the LED pins
    pinMode(RED_LED, OUTPUT);
    pinMode(ORANGE_LED, OUTPUT);
    pinMode(GREEN_LED, OUTPUT);
    
    // Then set them to a known state
    digitalWrite(RED_LED, LOW);
    digitalWrite(ORANGE_LED, LOW);
    digitalWrite(GREEN_LED, LOW);
    
    // Register the cloud function
    Particle.function("changeLed", changeLed);
}


void loop() {

}


int changeLed(String data) {
    if (data == "red") {
        redLed.toggle();
    } else if (data == "orange") {
        orangeLed.toggle();
    } else if (data == "green") {
        greenLed.toggle();
    }
    
    return 0;
}
