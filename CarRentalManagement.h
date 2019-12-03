#ifndef CAR_RENTAL_MANAGEMENT_H
#define CAR_RENTAL_MANAGEMENT_H
 


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
#endif // !CAR_RENTAL_MANAGEMENT_H




