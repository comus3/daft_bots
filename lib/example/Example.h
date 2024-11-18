#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <Arduino.h>

class Example {
public:
    Example(int sensorPin, int actuatorPin);
    void begin();
    void update();
    int getSensorValue();
    void controlActuator(int value);

private:
    int sensorPin;
    int actuatorPin;
    int sensorValue;
};

#endif

