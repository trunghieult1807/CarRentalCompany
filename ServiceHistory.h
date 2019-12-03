#ifndef SERVICE_HISTORY_H
#define SERVICE_HISTORY_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "MaintenanceJob.h"
#include "Vehicle.h"

using namespace std;

class ServiceHistory {
	string _time;
	string _instruction;
	string _lastService;
	MaintenanceJob* _maintenaceList;
	int _size;
public:
	void setTime(string);
	string getTime() {
		return _time;
	}
	void setInstruction(string);
	string getInstruction() {
		return _instruction;
	}
	void setLastService(string);
	string getLastService() {
		return _lastService;
	}
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


#endif // !SERVICE_HISTORY_H
