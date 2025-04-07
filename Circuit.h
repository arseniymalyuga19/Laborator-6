#pragma once
#include "Car.h"
#include <vector>

class Circuit {
private:
    float length;                         // ����� ������
    Weather weather;                      // �������� �������
    std::vector<Car*> cars;              // ������ �� ������
    std::vector<std::pair<Car*, float>> results; // ���������� (������ + �����)

public:
    void SetLength(float len);
    void SetWeather(Weather w);
    void AddCar(Car* car);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
};
