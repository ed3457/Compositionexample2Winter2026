#pragma once
#include "Wheel.h"
#include <string>
using namespace std; 
class Car
{
private:

	string make; 
	string vin;
	Wheel wheels[4];

public:
	void setMake(string m);
	string getMake();

	void setVin(string v); 
	string getVin();

	void setWheel(Wheel w, int index);
	Wheel& getWheel(int index); 

	void printCarInfo(); 

};

