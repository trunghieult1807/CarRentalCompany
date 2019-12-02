#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class CarRent{
	Vehicle* _vehicleRent;
public:
	CarRent() :_vehicleRent(NULL) {};
	~CarRent() {};
};

