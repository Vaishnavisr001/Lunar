#include<iostream>
using namespace std;

class Employee
{
protected:
	int eid;
	string name;
public:
	Employee(int e, string n)
	{
		eid = e;
		name = n;
	}

};

class Developer :public Employee
{
protected:
	float codinghours;
public:
	Developer(int eid, string name, float hours) :Employee(eid, name)
	{
		codinghours = hours;
	}
};


class Manager :public Employee
{
protected:
	int teamsize;
public:
	Manager(int eid, string name, int Size) :Employee(eid, name)
	{
		teamsize = Size;
	}


	void disp()
	{
		cout << "EmpId: " << eid << endl;
		cout << "Name: " << name << endl;
	}

};


class TechLead :public Developer, public Manager
{
private:
	float sal;
public:
	TechLead(int eid, string name, float codinghours, int teamsize, float sal) :Developer(eid, name, codinghours), Manager(eid, name, teamsize)
	{
		this->sal = sal;
	}
	void calculateSal()
	{
		float codingHoursSal = sal * codinghours;
		cout << "Salary based on coding " << codingHoursSal << endl;
		float teamSizeSal = (5000 * teamsize) + codingHoursSal;
		cout << "Salary based on coding and team " << teamSizeSal;
	}
};



int main()
{
	TechLead T(101, "Vaishnavi", 12, 10, 500);
	T.disp();
	T.calculateSal();
}
