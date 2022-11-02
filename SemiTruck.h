#pragma once

#include <string>
#include "Vehicle.h"


struct SemiTruck : Vehicle 
{
    ~SemiTruck() override; 
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    SemiTruck(const std::string& n);
    void pullOver();
    void setCruiseControl(int s);
};
