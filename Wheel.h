#pragma once

class Wheel
{

private:
	float diameter; 

public: 
	void setDiameter(float d);
	float getDiameter();

	void printInfo();

	Wheel();
	Wheel(float d);
};

