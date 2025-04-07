#pragma once
#include "Car.h"

class Volvo : public Car {
public:
    Volvo();
    float GetTime(float length, Weather weather) override;
    bool CanFinish(float length) override;
    std::string GetName() override;
};
