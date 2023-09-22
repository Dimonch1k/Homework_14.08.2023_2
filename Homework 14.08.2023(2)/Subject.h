#pragma once
#include <iostream>
using namespace std;


class Subject 
{
private:
    string name;

public:
    Subject(string name); // Initialization constructor

    string getName();

    bool operator==(Subject subject) const {
        return name == subject.getName();
    }
};

