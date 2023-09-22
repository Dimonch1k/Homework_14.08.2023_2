#pragma once
#include <iostream>
using namespace std;


#include "Plane.h"
class PassangerPlane :
    public Plane
{
private:
    int passangers;

public:
    PassangerPlane(int passangers);
    void doFly() override;
};

