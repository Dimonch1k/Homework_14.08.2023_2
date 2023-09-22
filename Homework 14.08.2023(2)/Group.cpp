#include "Group.h"


void Group::addStudent(Student student)
{
    students.push_back(student);
}

void Group::addSubject(Subject subject)
{
    subjects.push_back(subject);
}


void Group::printTable() // This function prints the table of all students' rates
{ 
    cout << "\nTable students' rates from subjects:\n\n";
    cout << "Students     ";
    for (Subject subject : subjects)
    {
        cout << " |" << subject.getName() << "| ";
    }
    cout << endl;

    for (Student student : students)
    {
        cout << student.getName() << "\t";
        for (int rate : student.getRates()) 
        {
            cout << rate << "\t ";
        }
        cout << endl;
    }
    cout << "\n\n\n";
}


void Group::printAverageStudentsRates() // This function prints students' average rates of all subjects
{
    cout << "Average students' rates:\n\n";
    for (Student student : students) 
    {
        vector<int> rates = student.getRates(); // We put the vector of rates of certain student in new vector
        int sum = 0;
        for (int rate : rates) 
        {
            sum += rate;
        }
        double averageRate = double(sum) / rates.size();
        cout << student.getName() << ": " << averageRate << "\n";
    }
    cout << "\n\n";
}


void Group::printAverageSubjectsRates() // This function prints average rates of all subjects
{
    cout << "Average subjects' rates:\n\n";
    for (Subject subject : subjects)
    {
        int sum = 0;
        int Max = INT_MIN;
        int Min = INT_MAX;

        for (Student student : students)
        {
            vector<int> rates = student.getRates();  // We put the vector of rates of certain student in new vector

            int rate = rates[distance(subjects.begin(), find(subjects.begin(), subjects.end(), subject))]; // We find the distance with help std::distance and
                                                                                                           // this distance is the rate of certain subject
            sum += rate;
            if (Max < rate) { Max = rate; }
            if (Min > rate) { Min = rate; }
        }

        double averageRate = double(sum) / students.size();
        cout << subject.getName() << ": " << averageRate << " (Max: " << Max << ", Min: " << Min << ")" << endl;
    }
}

void Group::printAverageGroupRate() 
{
    cout << "\nAverage group's rate: ";
    int sum = 0;
    for (Student student : students) 
    {
        vector<int> rates = student.getRates(); // We put the vector of rates of certain student in new vector
        for (int rate : rates) 
        {
            sum += rate;
        }
    }
    double averageRate = double(sum) / (students.size() * subjects.size()); // Find average rate of students' group
    cout << averageRate << endl;
}