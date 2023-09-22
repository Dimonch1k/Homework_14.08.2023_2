#include "MilitaryPlane.h"


MilitaryPlane::MilitaryPlane(int rockets)
{
	this->rockets = rockets;
}

void MilitaryPlane::doFly()
{
	cout << "Military plane just took off and has " << rockets << " rockets.\n\n";
}