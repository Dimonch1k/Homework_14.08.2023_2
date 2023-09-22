#include "PassangerPlane.h"


PassangerPlane::PassangerPlane(int passangers)
{
	this->passangers = passangers;
}

void PassangerPlane::doFly()
{
	cout << "Passanger plane just took off and have " << passangers << " passangers.\n\n";
}