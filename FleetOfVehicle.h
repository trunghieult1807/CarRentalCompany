#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class FleetOfVehicle {
	Vehicle* _vehicle;
	int _size;
public:
	void addVehicleToFleet(string vehicle);

};
void FleetOfVehicle::addVehicleToFleet(string vehicle){
	_size++;
	//add Vehicle
}