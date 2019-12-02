#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "MaintenanceJob.h"

using namespace std;

class ServiceHistory: public Vehicle {
	string _time;
	string _instruction;
	string _lastService;
	MaintenanceJob* _maintenaceList;
	int _size;
public:
	void setTime(string);
	string getTime();
	void setInstruction(string);
	string getInstruction();
	void setLastService(string);
	string getLastService();
	void when();
	void how();
};

void ServiceHistory::setTime(string time) {
	_time = time;
}

void ServiceHistory::setInstruction(string instruction) {
	_instruction = instruction;
}

void ServiceHistory::setLastService(string lastService) {
	_lastService = lastService;
}