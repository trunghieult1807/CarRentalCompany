#pragma once
#include <iostream>
#include <string>
#include "Customer.h"
#include "Vehicle.h"

using namespace std;



class Contract:public Customer {
	string _rentingDay;
	string _expireDay;

	string _ensuranceInformation;
	Customer* _client;
	Vehicle* _vehicle;
public:
	void getCustomerBankAccount();
	void generateBill();
};


