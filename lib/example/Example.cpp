#include "Example.h"

Example::Example(int sensorPin, int actuatorPin)
    : sensorPin(sensorPin), actuatorPin(actuatorPin), sensorValue(0) {}

void Example::begin() {
    pinMode(sensorPin, INPUT);
    pinMode(actuatorPin, OUTPUT);
}

void Example::update() {
    sensorValue = analogRead(sensorPin);
    controlActuator(sensorValue);
}

int Example::getSensorValue() {
    return sensorValue;
}

void Example::controlActuator(int value) {
    digitalWrite(actuatorPin, value > 500 ? HIGH : LOW);
}
