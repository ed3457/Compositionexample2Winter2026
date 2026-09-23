#include "Wheel.h"
#include <iostream>
using namespace std; 

void Wheel::setDiameter(float d)
{
	diameter = d; 
}

float Wheel::getDiameter()
{
	return diameter;
}

void Wheel::printInfo()
{
	cout << getDiameter() << endl;
}

Wheel::Wheel()
{
	setDiameter(14);
}

Wheel::Wheel(float d)
{
	setDiameter(d);
}
