#pragma once
#include "Car.h"
#include <vector>

class Circuit {
private:
    float length;                         // Длина трассы
    Weather weather;                      // Погодные условия
    std::vector<Car*> cars;              // Машины на трассе
    std::vector<std::pair<Car*, float>> results; // Результаты (машина + время)

public:
    void SetLength(float len);
    void SetWeather(Weather w);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};
