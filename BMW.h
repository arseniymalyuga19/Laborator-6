#pragma once
#include "Car.h"

class BMW : public Car {
public:
    BMW();
    float GetTime(float length, Weather weather) override;
    bool CanFinish(float length) override;
    std::string GetName() override;
};
