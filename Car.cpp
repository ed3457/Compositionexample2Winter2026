#include "Car.h"
#include <iostream>
using namespace std; 

void Car::setMake(string m)
{
	make = m;
}

string Car::getMake()
{
	return make;
}

void Car::setVin(string v)
{
	vin = v;
}

string Car::getVin()
{
	return vin;
}

void Car::setWheel(Wheel w, int index)
{
	if (index >= 0 && index <= 3)
		wheels[index] = w;
	else
		throw 1;// indicate a out of bound index 
}

Wheel& Car::getWheel(int index)
{
	if (index >= 0 && index <= 3)
		return wheels[index];
	else
		throw 1;// indicate a out of bound index 
}

void Car::printCarInfo()
{
	cout << "Make:" << getMake() << endl;
	cout << "Vin:" << getVin() << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << "Wheel no." << (i + 1) << endl;
		wheels[i].printInfo();

	}

}
