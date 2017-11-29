#include"CommissionEmployee.h"
#include<string>
#include<iostream>
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string & last,
	const string & ssn,
	double gs, double cr) {
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	grossSales = gs;
	commissionRate = cr;
};

void CommissionEmployee::setFirstName(const string & first) {
	firstName = first;
}
string CommissionEmployee::getFirstName()const {
	return firstName;
}

void CommissionEmployee ::setLastName(const string & last) {
	lastName = last;
}

string CommissionEmployee::getLastName()const {
	return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}
string CommissionEmployee::getSocialSecurityNumber()const {
	return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double gs) {
	if (gs >= 0.0)
		grossSales = gs;
	else
		throw invalid_argument("Gross sales must be >= 0.0");


}

double CommissionEmployee::getGrossSales()const {
	return grossSales;
}

void CommissionEmployee::setCommissionRate(double cr) {
	if (cr > 0.0 && cr < 1.0)
		commissionRate = cr;
	else
		throw invalid_argument("commssion rate must be >0.0 && <1");
}

double CommissionEmployee::getCommissionRate()const {
	return grossSales;
}

double CommissionEmployee::earning()const {
	return commissionRate * grossSales;
}
void CommissionEmployee::print()const {
	cout << "firtName: " << firstName << endl;
	cout << "lastName: " << lastName << endl;
	cout << "grossSales: " << grossSales << endl;
	cout << "commission rate: " << commissionRate << endl;

}
