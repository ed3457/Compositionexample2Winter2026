// Compositionexample2Winter2026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

int main()
{
	Car jeep1; 

	for(int i=0;i<4;i++)
	jeep1.getWheel(i).setDiameter(20);

	jeep1.printCarInfo();


  
}

