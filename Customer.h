#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer {
protected:
	string name;
	int age;
	int IDnumber;
	string license;
	string address;
	string phoneNumber;
public:
	void setPhoneNumber(string phoneNumber) { this->phoneNumber = phoneNumber; }
	string getPhoneNumber() { return phoneNumber; }
	void setAddress(string addr) { this->address = addr; }
	string getAddress() { return address; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
	void setLicense(string license) { this->license = license; }
	string getLicense() { return license; }
	void setIDnumber(int id) { this->IDnumber = id; }
	int getIDnumber() { return IDnumber; }
};