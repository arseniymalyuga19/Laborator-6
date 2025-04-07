#pragma once
#include "Weather.h"
#include <string>

class Car {
protected:
    float fuelCapacity;       // Объём бака (в литрах)
    float fuelConsumption;    // Расход топлива на 100 км
    float averageSpeed[3];    // Средняя скорость (Rain, Sunny, Snow)
    std::string name;         // Название машины

public:
    virtual float GetTime(float length, Weather weather) = 0;  // Время на дистанцию
    virtual bool CanFinish(float length) = 0;                  // Может ли проехать
    virtual std::string GetName() = 0;                         // Получить имя машины
    virtual ~Car() {}
};
