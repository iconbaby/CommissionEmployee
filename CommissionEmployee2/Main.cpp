#include<iostream>
#include<iomanip>
#include"CommissionEmployee.h"
using namespace std;
int main() {

	CommissionEmployee ce("sl", "kk", "123456", 1000, .1);
	cout << fixed<<setprecision(2);
	cout << "fistName " << ce.getFirstName() << endl;
	cout << "lastName " << ce.getLastName() << endl;
	cout << "ssn " << ce.getSocialSecurityNumber() << endl;
	cout << "earning " << ce.earning() << endl;
	
	ce.print();


}