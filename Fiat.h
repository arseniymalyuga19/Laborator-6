#pragma once
#include "Car.h"

class Fiat : public Car {
public:
    Fiat();
    float GetTime(float length, Weather weather) override;
    bool CanFinish(float length) override;
    std::string GetName() override;
};
