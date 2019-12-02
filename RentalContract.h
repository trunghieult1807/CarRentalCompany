#pragma once
#include <iostream>
#include <string>

using namespace std;

class RentalContract {
	string customer;
	string pickDate;
	string returnDate;
	string location;
public:
	void setPickTime(string) {};
	string getPickTime() {};
	void setReturnTime(string) {};
	string getReturnTime() {};
};
