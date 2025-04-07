#include "Circuit.h"
#include <iostream>
#include <algorithm>

void Circuit::SetLength(float len) {
    length = len;
}

void Circuit::SetWeather(Weather w) {
    weather = w;
}

void Circuit::AddCar(Car* car) {
    cars.push_back(car);
}

void Circuit::Race() {
    results.clear();
    for (auto car : cars) {
        if (car->CanFinish(length)) {
            float time = car->GetTime(length, weather);
            results.push_back({ car, time });
        }
        else {
            results.push_back({ car, -1 });
        }
    }
}

void Circuit::ShowFinalRanks() {
    std::vector<std::pair<Car*, float>> finished;
    for (auto& res : results) {
        if (res.second >= 0)
            finished.push_back(res);
    }

    std::sort(finished.begin(), finished.end(),
        [](auto& a, auto& b) { return a.second < b.second; });

    std::cout << "=== Final Ranks ===\n";
    for (auto& res : finished) {
        std::cout << res.first->GetName() << " finished in " << res.second << " hours\n";
    }
}

void Circuit::ShowWhoDidNotFinish() {
    std::cout << "=== Did Not Finish ===\n";
    for (auto& res : results) {
        if (res.second < 0) {
            std::cout << res.first->GetName() << " did not finish.\n";
        }
    }
}
