#ifndef CAR_RENTAL_MANAGEMENT_H
#define CAR_RENTAL_MANAGEMENT_H

#pragma once
#include <iostream>
#include <string>
#include "FleetOfVehicle.h"
#include "Contract.h"

using namespace std;

class CarRentalCompany{
	string _id;
	string _name;
	string _phone;
	string _carDetails;
	FleetOfVehicle* _fleetOfVehicle;
	Contract* _contract;
public:
	bool checkForAvailable();
	bool confirmBooking();
	void sellCar();
	void rentCar();
	CarRentalCompany() : _id(NULL), _name(NULL), _phone(NULL), _carDetails(NULL), _fleetOfVehicle(NULL){};
	CarRentalCompany(string id, string name, string phone, string Brand, string detail) {
		_id = id;
		_name = name;
		_phone = phone;
		_carDetails = detail;
	}
	~CarRentalCompany() {};
};


#endif