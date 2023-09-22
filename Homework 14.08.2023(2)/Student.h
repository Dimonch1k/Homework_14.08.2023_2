#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Student
{
private:
    string name;
    vector<int> rates;

public:
    Student(string name); // Initialization constructor

    void addRate(int rate);

    string getName();

    vector<int> getRates()
    {
        return rates;
    }

};
