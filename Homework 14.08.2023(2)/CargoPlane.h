#pragma once
#include <iostream>
using namespace std;


#include "Plane.h"
class CargoPlane :
    public Plane
{
private:
    int weight;

public:
    CargoPlane(int weight);
    void doFly() override;
};

