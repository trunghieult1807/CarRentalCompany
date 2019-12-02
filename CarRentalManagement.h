#pragma once
#include <iostream>
#include <string>
#include "CarRent.h"
#include "Vehicle.h"
#include "BookAndRent.h"

using namespace std;

class CarRentalManagement:public BookAndRent{
	CarRent* _carRent;
	BookAndRent* _bookAndRentList;
	vector<Vehicle*> _fleetOfVehicle;
public:
	void addVehicleToFleet(Vehicle*);
	virtual void serviceFleet();
	CarRentalManagement() : _carRent(NULL), _fleetOfVehicle(NULL), _bookAndRentList(NULL) {};
	virtual void showAvailableVehicle();
};

void CarRentalManagement::showAvailableVehicle() {
	for (int i = 0; i < _fleetOfVehicle.size(); i++) {

	}
}



