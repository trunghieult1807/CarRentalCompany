#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include"CarRentalCompany.h"
#include"CarRentalManagement.h"
using namespace rapidjson;
using namespace std;

void addVehicle(FleetOfVehicle* &fleetOfVehicle, string brand, double mileage, string model, double price) {
	fleetOfVehicle->addVehicleToFleet(brand, mileage, model, price);
}

void printFleetOfVehicle(FleetOfVehicle* fleetOfVehicle) {
	fleetOfVehicle->printVehicleFromFleet();
}

void addVehicleToFleet(FleetOfVehicle* fleetOfVehicle ,string brand, string model, double price, double mileage) {
	cout << "Add vehicle to fleet: " << endl;
	cout << "Brand: ";
	cin >> brand;
	cout << "Mileage: ";
	cin >> mileage;
	cout << "Price: ";
	cin >> price;
	cout << "Model: ";
	cin >> model;
	addVehicle(fleetOfVehicle, brand, mileage, model, price);
	printFleetOfVehicle(fleetOfVehicle);
}

int main() {
	int choice;
	cout << "*****Car Rental Company*****" << endl;
	cout << "Welcome to our website" << endl;
	cout << "Add vehicle to fleet." << endl;
	//cout << "2. Update maintenance job." << endl;
	//cout << "Enter your choice: ";
	//cin >> choice;
	FleetOfVehicle* fleetOfVehicle = new FleetOfVehicle;
	string brand;
	double mileage;
	double price;
	string model;
	//addVehicleToFleet(fleetOfVehicle, brand, model, price, mileage);
	
	 //1. Parse a JSON string into DOM.
	const char* json = "{\"project\":\"rapidjson\",\"stars\":10}";
	Document d;
	d.Parse(json);

	// 2. Modify it by DOM.
	Value& s = d["stars"];
	s.SetInt(s.GetInt() + 1);

	// 3. Stringify the DOM
	StringBuffer buffer;
	Writer<StringBuffer> writer(buffer);
	d.Accept(writer);

	// Output {"project":"rapidjson","stars":11}
	ofstream outFile;
	outFile.open("output.json");
	outFile << buffer.GetString() << std::endl;
	outFile.close();
	return 0;
}