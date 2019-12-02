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
		serviceEngine->updateStatus("Oil change");
		serviceEngine->minorChange();
		serviceEngine->updateStatus("Minor Change");
		serviceEngine->majorChange();
		serviceEngine->updateStatus("Major change");
	}
	if (currMileage >= 5000) {
		serviceTransmission->changeFluid();
		serviceTransmission->updateStatus("Change fluid");
		serviceTransmission->overhaul();
		serviceTransmission->updateStatus("Overhaul");
	}
	if (currMileage >= 10000) {
		serviceTires->adjustTire();
		serviceTires->updateStatus("Adjust tire");
		serviceTires->replaceTire();
		serviceTires->updateStatus("Replace tires");

	}
	delete serviceEngine;
	delete serviceTires;
	delete serviceTransmission;
}

