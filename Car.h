#pragma once
#include "Weather.h"
#include <string>

class Car {
protected:
    float fuelCapacity;       // ����� ���� (� ������)
    float fuelConsumption;    // ������ ������� �� 100 ��
    float averageSpeed[3];    // ������� �������� (Rain, Sunny, Snow)
    std::string name;         // �������� ������

public:
    virtual float GetTime(float length, Weather weather) = 0;  // ����� �� ���������
    virtual bool CanFinish(float length) = 0;                  // ����� �� ��������
    virtual std::string GetName() = 0;                         // �������� ��� ������
    virtual ~Car() {}
};
