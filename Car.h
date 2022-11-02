#pragma once

#include "Vehicle.h"


struct Car : Vehicle
{
    ~Car() override = default; 
    Car(const Car&) = default;
    Car& operator=(const Car&) = default;

    Car(const std::string& s);
    void closeWindows();

    void tryToEvade() override;
};
