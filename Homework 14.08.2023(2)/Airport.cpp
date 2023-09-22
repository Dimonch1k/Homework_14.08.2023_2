#include "Airport.h"


void Airport::addPlane(Plane* plane)
{
	planes.push_back(plane);
}


void Airport::takeOff()
{
	for (int i = 0; i < planes.size(); i++)
	{
		planes[i]->doFly();
	}
	cout << "\nThere are " << planes.size() << " planes took off!!!\n\n\n\n";
}