#include <iostream>
#include <vector>

using namespace std;


// Task 1
// Planes

/*
#include "Airport.h"
#include"Plane.h"

#include "CargoPlane.h"
#include "MilitaryPlane.h"
#include "PassangerPlane.h"


int main()
{
	Airport airport;

	Plane* cargo1 = new CargoPlane(500);
	Plane* cargo2 = new CargoPlane(1000);
	airport.addPlane(cargo1);
	airport.addPlane(cargo2);

	Plane* military1 = new MilitaryPlane(100);
	Plane* military2 = new MilitaryPlane(200);
	airport.addPlane(military1);
	airport.addPlane(military2);

	Plane* passangerPlane1 = new PassangerPlane(150);
	Plane* passangerPlane2 = new PassangerPlane(50);
	airport.addPlane(passangerPlane1);
	airport.addPlane(passangerPlane2);


	airport.takeOff();
}*/





// Task 2
// Students' group

#include "Group.h"
#include "Student.h"
#include "Subject.h"



int main() {

    

    Group group("Group 1");

    Subject Math("Math");
    Subject Physik("Physik");
    Subject History("History");

    Student student1("Student 1");
    Student student2("Student 2");
    Student student3("Student 3");

    student1.addRate(95);
    student1.addRate(85);
    student1.addRate(75);

    student2.addRate(88);
    student2.addRate(92);
    student2.addRate(78);

    student3.addRate(70);
    student3.addRate(65);
    student3.addRate(80);

    group.addStudent(student1);
    group.addStudent(student2);
    group.addStudent(student3);

    group.addSubject(Math);
    group.addSubject(Physik);
    group.addSubject(History);

    group.printTable();
    group.printAverageStudentsRates();
    group.printAverageSubjectsRates();
    group.printAverageGroupRate();
    cout << "\n\n\n\n";
}