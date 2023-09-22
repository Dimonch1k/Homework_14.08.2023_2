#include "Student.h"


Student::Student(string name)
{
	this->name = name;
}

void Student::addRate(int rate)
{
	rates.push_back(rate);
}

string Student::getName()
{
	return name;
}