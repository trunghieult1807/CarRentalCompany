#pragma once
#include <iostream>
#include <string>

using namespace std;

class MaintenanceJob {
	string _status;
	double _price;
public:
	MaintenanceJob(){}
	~MaintenanceJob(){}
	string getStatus() {
		return _status;
	}
	void updateStatus(const string work) {
		_status = _status + work + " ";
	}
};
class ServiceEngine :public MaintenanceJob {
public:
	ServiceEngine(){}
	~ServiceEngine(){}
	void oilChange() {
		updateStatus("Oil change");
	}
	void minorChange() {
		updateStatus("Minor change");
	}
	void majorChange() {
		updateStatus("Major change");
	}
};
class ServiceTransmission :public MaintenanceJob {
public:
	ServiceTransmission(){}
	~ServiceTransmission(){}
	void changeFluid() {
		updateStatus("Fluid change");
	}
	void overhaul() {
		updateStatus("Overhaul");
	}
};
class ServiceTires :public MaintenanceJob {
public:
	ServiceTires(){}
	~ServiceTires(){}
	void replaceTire() {
		updateStatus("Replace tires");
	}
	void adjustTire() {
		updateStatus("Adjust tires");
	}
};