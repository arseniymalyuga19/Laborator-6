#include "Volvo.h"

Volvo::Volvo() {
    name = "Volvo";
    fuelCapacity = 60;
    fuelConsumption = 8;
    averageSpeed[0] = 60; // Rain
    averageSpeed[1] = 100; // Sunny
    averageSpeed[2] = 50; // Snow
}

float Volvo::GetTime(float length, Weather weather) {
    if (!CanFinish(length)) return -1;
    return length / averageSpeed[(int)weather];
}

bool Volvo::CanFinish(float length) {
    return (fuelCapacity * 100 / fuelConsumption) >= length;
}

std::string Volvo::GetName() {
    return name;
}
