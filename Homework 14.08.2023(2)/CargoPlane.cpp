#include "CargoPlane.h"


CargoPlane::CargoPlane(int weight)
{
	this->weight = weight;
}

void CargoPlane::doFly()
{
	cout << "Cargo plane just took off and have " << weight << " ton of weight.\n\n";
}