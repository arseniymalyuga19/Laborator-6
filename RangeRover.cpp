#include "RangeRover.h"

RangeRover::RangeRover() {
    name = "RangeRover";
    fuelCapacity = 80;
    fuelConsumption = 15;
    averageSpeed[0] = 65;
    averageSpeed[1] = 120;
    averageSpeed[2] = 55;
}

float RangeRover::GetTime(float length, Weather weather) {
    if (!CanFinish(length)) return -1;
    return length / averageSpeed[(int)weather];
}

bool RangeRover::CanFinish(float length) {
    return (fuelCapacity * 100 / fuelConsumption) >= length;
}

std::string RangeRover::GetName() {
    return name;
}
