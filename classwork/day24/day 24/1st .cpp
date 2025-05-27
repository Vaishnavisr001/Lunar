#include<iostream>
using namespace std;
struct address {
	int hNo;
	int pincode;
	string addressline1;
	string addressline2;
	string city;
	string state;

};
struct Employee {
	int id;
	string name;
	
	struct Date {
		int day, month, year;
	};
	address addr;
	
	int main()
	{
		EMP e;
		e.id = 101;
		e.addr.hNo = 2000;
