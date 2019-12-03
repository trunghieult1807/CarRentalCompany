#ifndef BOOK_AND_RENT_H
#define BOOK_AND_RENT_H

#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class BookAndRent{
	string _information;
public:
	void setInformation(string infor) {
		_information = infor;
	}
	virtual void showAvailableVehicle() = 0;
	virtual void bookOnline(string country, string city, string location, string beginDay, string endDay) = 0;
	virtual void rentOnline(string country, string city, string location, string beginDay, string endDay, string creditID) = 0;
};

#endif