#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string &n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
}

void SemiTruck::setCruiseControl(int s)
{
    setSpeed(s);
}
