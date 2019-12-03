#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ServiceHistory.h"

using namespace std;

class Vehicle {
protected:
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
	double getCurrMileage() {
		return _mileage;
	}
	void setMileage(double mileage) {
		_mileage = mileage;
	}
	double getMileage() {
		return _mileage;
	}
	void resetMileage() {
		_mileage = 0;
	}
	void setPrice(double price) {
		_price = price;
	}
	double getPrice() {
		return _price;
	}
	void setModel(string model) {
		_model = model;
	}
	string getModel() {
		return _model;
	}
	//virtual void serviceEngine() = 0;
	//virtual void serviceTransmission() = 0;
	//virtual void serviceTires() = 0;
};

void Vehicle::setBrand(string brand) {
	_brand = brand;
}
string Vehicle::getBrand() {
	return _brand;
}

