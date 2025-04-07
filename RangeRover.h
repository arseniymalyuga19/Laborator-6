#pragma once
#include "Car.h"

class RangeRover : public Car {
public:
    RangeRover();
    float GetTime(float length, Weather weather) override;
    bool CanFinish(float length) override;
    std::string GetName() override;
};
