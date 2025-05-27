#include<iostream>
using namespace std;
/*struct <tag name>
{
members;
};
*/

typedef struct Employee
{
	int empPhno;
	int empID;
	string empName;
	string empAddress;
	string empGender;


}EMP;
int main()
{
	EMP e1;
	e1.empID = 101;
	e1.empName = "Bhima";
	e1.empGender = 'M';
	e1.empAddress = "chennia";
	e1.empPhone = 98765467865;

	cout << "Size of Emp:" << sizeof(EMP) << "\t size=" << sizeof(e1) << endl;
	cout << "Name: " << e1.empName << endl;
	cout << "phone number: " << e1.empPhone << endl;
	cout << "address: " << e1.empAddress << endl;
	cout << "Name: " << e1.empName << endl;
	cout << "ID";: " << e1.emID << endl;
	cout << endl;
	return 0;
}