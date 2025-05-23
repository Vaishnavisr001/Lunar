#include<iostream>
using namespace std;
class Employee {
public:
	int e_id;
	string e_name;
};
int main()
{
	Employee e;
	e.e_id = 101;
	e.e_name = "vaishnavi";
	Employee* ptr = &e;
	cout<<e.e_id<<"\t"<<
}