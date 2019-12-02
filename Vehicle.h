#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ServiceHistory.h"

using namespace std;

class Vehicle {
	int _quantity;
	double _price;
	string _status;
	string _brand;
	string _model;
	double _mileage;
	ServiceHistory* _serviceHistory;
public:
	void setBrand(string);
	string getBrand();
	void setModel(string);
	string getModel();
	double getCurrMileage() {
		return _mileage;
	}
	virtual void serviceEngine() = 0;
	virtual void serviceTransmission() = 0;
	virtual void serviceTires() = 0;
};

void Vehicle::setBrand(string brand) {
	_brand = brand;
}
string Vehicle::getBrand() {
	return _brand;
}
void Vehicle::setModel(string model) {
	_model = model;
}
string Vehicle::getModel() {
	return _model;
}
