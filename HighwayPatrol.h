#pragma once 

#include "Vehicle.h"
#include "Highway.h"


struct HighwayPatrol : Vehicle 
{
    ~HighwayPatrol() override; 
    HighwayPatrol(const HighwayPatrol&) = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;
    
    HighwayPatrol();
    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
