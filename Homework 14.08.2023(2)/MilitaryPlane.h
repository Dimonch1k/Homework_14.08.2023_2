#pragma once
#include <iostream>
using namespace std;


#include "Plane.h"
class MilitaryPlane :
    public Plane
{
private:
    int rockets;

public:
    MilitaryPlane(int rockets);
    void doFly() override;
};

