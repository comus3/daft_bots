#include "Example.h"

Example::Example(int sensorPin, int actuatorPin) {
    this->sensorPin = sensorPin;
    this->actuatorPin = actuatorPin;
    this->sensorValue = 0;
}

void Example::begin() {
    pinMode(sensorPin, INPUT);       // Initialize sensor pin
    pinMode(actuatorPin, OUTPUT);    // Initialize actuator pin
}

void Example::update() {
    sensorValue = analogRead(sensorPin);  // Read sensor value
    controlActuator(sensorValue);         // Control actuator based on sensor value
}

int Example::getSensorValue() {
    return sensorValue;  // Return the current sensor value
}

void Example::controlActuator(int value) {
    // For simplicity, let's turn on the actuator if the sensor value is above a threshold
    if (value > 500) {
        digitalWrite(actuatorPin, HIGH);  // Turn on actuator
    } else {
        digitalWrite(actuatorPin, LOW);   // Turn off actuator
    }
}
