#pragma once
#include "Vehicle.h"
#include "MaintenanceJob.h"


class SUV : public Vehicle {
	bool _fourByFour;
public:
	SUV(){}
	~SUV(){}
	void maintain();
};

void SUV::maintain() {
	ServiceEngine* serviceEngine = new ServiceEngine();
	ServiceTransmission* serviceTransmission = new ServiceTransmission();
	ServiceTires* serviceTires = new ServiceTires();
	double currMileage = getCurrMileage();
	if (currMileage >= 1000) {
		serviceEngine->oilChange();
	}
	if (currMileage >= 5000) {
		serviceTransmission->changeFluid();
		serviceTransmission->overhaul();
	}
	if (currMileage >= 10000) {
		serviceTires->adjustTire();
		serviceTires->replaceTire();
	}
	delete serviceEngine;
	delete serviceTires;
	delete serviceTransmission;
}

