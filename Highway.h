#pragma once

#include <vector>
#include <algorithm>

struct Vehicle;

struct Highway
{
    friend struct HighwayPatrol;
    void changeSpeed(int newSpeed);
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
private:
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    std::vector<Vehicle*> vehicles; 
};
