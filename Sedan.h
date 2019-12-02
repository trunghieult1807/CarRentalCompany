#pragma once

#include "Vehicle.h"

class Sedan : public Vehicle {
	int _trunkCap;
	ServiceHistory _history;
public:
	void setTrunkCap(int);
	int getTrunkCap();
	void serviceEngine();
	void serviceTransmission();
	void serviceTires();
	void maintain();
	Sedan() : _trunkCap(0) {};
	~Sedan() {};
};

void Sedan::maintain() {
	ServiceEngine* serviceEngine = new ServiceEngine();
	ServiceTransmission* serviceTransmission = new ServiceTransmission();
	ServiceTires* serviceTires = new ServiceTires();
	double currMileage = getCurrMileage();
	if (currMileage >= 1000) {

	}
}

void Sedan::setTrunkCap(int cap) {
	_trunkCap = cap;
}

int Sedan::getTrunkCap() {
	return _trunkCap;
}

void Sedan::serviceEngine() {};

void Sedan::serviceTransmission() {};

void Sedan::serviceTires() {};