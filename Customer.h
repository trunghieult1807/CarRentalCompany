#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer {
	
	string _name;
	string _DOB;
	string _location;
	string _phone;
	string _creditCard;
public:
	void setProfile(string);
	string getProfile();
};