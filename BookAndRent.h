#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class BookAndRent{
public:
	string getInformation();
	virtual void showAvailableVehicle() = 0;
};

