#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
class Employee {
	int id;
	string name;
public:
	Employee(int id,string name):id(id),name(name){}
	void disEmp() {
		cout << "ID:" << id << "\tName: " << name << endl;

	}
};
int main() {
	vector<int>v = { 1,2,3 };
	vector<int>::iterator it = v.begin();
	for (;it != v.end();it++)
		cout << *it << endl;
	cout << endl;
	vector<Employee>vEmp;
	vEmp.emplace_back(101, "abc1");
	vEmp.emplace_back(102, "abc2");
	vEmp.emplace_back(103, "abc3");
	vEmp.emplace_back(104, "abc4");
	vector<Employee>::iterator itEmp;
	int i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++, itEmp++)
	{
		cout << "Employee(" << (i + 1) << endl;
		(*itEmp).disEmp();
		cout << "================\n";
	}
	vector<Employee>::iterator itEmp1;
	int i = 0;
	for (itEmp = vEmp.begin();itEmp != vEmp.end();i++, itEmp++)
	{
		cout << "Employee(" << (i + 1) << endl;
		(*itEmp).disEmp();
		cout << "================\n";
	}


}