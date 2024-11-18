#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <Arduino.h>

class Example {
public:
    // Constructor
    Example(int sensorPin, int actuatorPin);

    // Method to initialize the sensor and actuator
    void begin();

    // Method to update sensor data and control actuator
    void update();

    // Method to get the sensor value
    int getSensorValue();

    // Method to control the actuator (e.g., turn on/off)
    void controlActuator(int value);

private:
    int sensorPin;  // Pin connected to the sensor
    int actuatorPin;  // Pin connected to the actuator
    int sensorValue;  // Store sensor data
};

#endif
