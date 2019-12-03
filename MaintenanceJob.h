#pragma once
#include <iostream>
#include <string>

using namespace std;

class MaintenanceJob {
	string _status;
	double _price;
	double _mileage;
public:
	MaintenanceJob(){}
	~MaintenanceJob(){}
	string getStatus() {
		return _status;
	}
	void updateStatus(const string work) {
		_status = _status + work + " ";
	}
	double operator-(const MaintenanceJob& that){
		return this->_mileage - that._mileage;
	}
	bool operator==(const MaintenanceJob& that){
		return that._mileage == this->_mileage;
	}
	bool operator<(const MaintenanceJob& that){
		return this->_mileage < that._mileage;
	}
	bool operator!=(const MaintenanceJob& that){
		return !(*this == that);
	}
	bool operator>(const MaintenanceJob& that){
		return !(*this < that && *this == that);
	}
};
class ServiceEngine :public MaintenanceJob {
public:
	ServiceEngine(){}
	~ServiceEngine(){}
	void oilChange() {
		updateStatus("Oil change");
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
		updateStatus("Tranmission overhaul");
	}
};
class ServiceTires :public MaintenanceJob {
public:
	ServiceTires(){}
	~ServiceTires(){}
	void replaceTire() {
		updateStatus("Tires replacement");
	}
	void adjustTire() {
		updateStatus("Tires adjustment");
	}
};