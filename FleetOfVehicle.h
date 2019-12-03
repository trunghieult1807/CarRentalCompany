#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"
#define MAX 10000

using namespace std;

class FleetOfVehicle :public Vehicle{
	int _size;
	Vehicle* _vehicle[MAX];
public:
	void addVehicleToFleet(string brand, double mileage, string model, double price);
	void printVehicleFromFleet();
};
void FleetOfVehicle::addVehicleToFleet(string brand, double mileage, string model, double price){
	_vehicle[_size]->setBrand(brand);
	_vehicle[_size]->setMileage(mileage);
	_vehicle[_size]->setModel(model);
	_vehicle[_size]->setPrice(price);
	_size++;
	//add Vehicle
}
void FleetOfVehicle::printVehicleFromFleet() {
	cout << "No." << setw(5) << "Brand" << setw(10) << "Mileage" << setw(10) << "Model" << setw(10) << "Price" << endl;
	for (int i = 0; i < _size; i++) {
		cout << i << setw(5) << _vehicle[i]->getBrand() << setw(10) << _vehicle[i]->getMileage() << setw(10) << _vehicle[i]->getModel() << setw(10) << _vehicle[i]->getPrice() << endl;
		cout << endl;
	}
}