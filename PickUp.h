#pragma once

#include "Vehicle.h"

class PickUp : public Vehicle {
	vector<int> _trunkCap;
public:
	PickUp() {
		_trunkCap.push_back(0);
		_trunkCap.push_back(0);
		_trunkCap.push_back(0);
	}
	PickUp(int length, int width, int height) {
		_trunkCap.push_back(length);
		_trunkCap.push_back(width);
		_trunkCap.push_back(height);
	}
	~PickUp() {};
	void maintain();
};

void PickUp::maintain() {
	ServiceEngine* serviceEngine = new ServiceEngine();
	ServiceTires* serviceTires = new ServiceTires();
	ServiceTransmission* serviceTransmission = new ServiceTransmission();
	double currMileage = getCurrMileage();
	if (currMileage >= 1000) {
		serviceEngine->oilChange;
	}
	if (currMileage >= 5000) {
		serviceTransmission->changeFluid;
		serviceTransmission->overhaul;
	}
	if (currMileage >= 10000) {
		serviceTires->adjustTire();
		serviceTires->replaceTire();
	}
}



