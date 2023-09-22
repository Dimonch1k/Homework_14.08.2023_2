#pragma once
#include <iostream>
#include <vector>
using namespace std;

#include "Student.h"
#include "Subject.h"
class Group 
{
private:
    string name;
    vector<Student> students;
    vector<Subject> subjects;


public:
    Group(string name_) : name(name_) {}

    void addStudent(Student student);
    void addSubject(Subject subject);

    void printTable();

    void printAverageStudentsRates();

    void printAverageSubjectsRates();

    void printAverageGroupRate();
};