#pragma once
#include <iostream>
#include <vector>
using namespace std;


#include "Plane.h"
class Airport :
    public Plane
{
private:
    vector<Plane*> planes;

public:
    void addPlane(Plane* plane);
    void takeOff();
};

