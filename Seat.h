#pragma once
#include "Car.h"

class Seat : public Car {
public:
    Seat();
    float GetTime(float length, Weather weather) override;
    bool CanFinish(float length) override;
    std::string GetName() override;
};
