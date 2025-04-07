#include "Fiat.h"

Fiat::Fiat() {
    name = "Fiat";
    fuelCapacity = 40;
    fuelConsumption = 7;
    averageSpeed[0] = 45;
    averageSpeed[1] = 90;
    averageSpeed[2] = 35;
}

float Fiat::GetTime(float length, Weather weather) {
    if (!CanFinish(length)) return -1;
    return length / averageSpeed[(int)weather];
}

bool Fiat::CanFinish(float length) {
    return (fuelCapacity * 100 / fuelConsumption) >= length;
}

std::string Fiat::GetName() {
    return name;
}
