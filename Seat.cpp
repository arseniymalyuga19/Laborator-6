#include "Seat.h"

Seat::Seat() {
    name = "Seat";
    fuelCapacity = 50;
    fuelConsumption = 6;
    averageSpeed[0] = 55;
    averageSpeed[1] = 100;
    averageSpeed[2] = 45;
}

float Seat::GetTime(float length, Weather weather) {
    if (!CanFinish(length)) return -1;
    return length / averageSpeed[(int)weather];
}

bool Seat::CanFinish(float length) {
    return (fuelCapacity * 100 / fuelConsumption) >= length;
}

std::string Seat::GetName() {
    return name;
}
