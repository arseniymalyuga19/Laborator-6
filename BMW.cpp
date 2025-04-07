#include "BMW.h"

BMW::BMW() {
    name = "BMW";
    fuelCapacity = 65;
    fuelConsumption = 10;
    averageSpeed[0] = 70;
    averageSpeed[1] = 130;
    averageSpeed[2] = 60;
}

float BMW::GetTime(float length, Weather weather) {
    if (!CanFinish(length)) return -1;
    return length / averageSpeed[(int)weather];
}

bool BMW::CanFinish(float length) {
    return (fuelCapacity * 100 / fuelConsumption) >= length;
}

std::string BMW::GetName() {
    return name;
}
