#include<iostream>
using namespace std;
class Employee {
protected:
	int empId;
	string name;
public:
	Employee(int id, string n) {
		empId = id;
		name = n;

	}
	int getEmpId() {
		return empId;

	}
	string getNmae() {
		return name;

	}
	void setEmpId(int id) {
		empId = id;
	}
	void setName(string n) {
		name = n;
	}
	void display() {
		cout << "TechLead Info" << endl;
		cout << "EMPID:" << empId << endl;
		cout << "Name:" << name << endl;


	}
};
class Developer :public Employee {
protected:
	int codingHours;
public:
	Developer(int id, string n, int hours) :Employee(id, n) {
		codingHours = hours;

	}
	int getCodingHours() {
		return codingHours;

	}
	void setCodingHours(int hours) {
		codingHours = hours;
	}
};
class Manager :public Employee {
protected:
	int teamSize;
public:
	Manager(int id,string n,int size):Employee(id,n),teamSize(size){}
	int getTeamSize() {
		return teamSize;
	}
	void setTeamSize(int size) {
		teamSize = size;

	}
};
class TechLead :public Developer, public Manager {
public:
	TechLead(int id, string n, int hours, int size) :Employee(id, n), Developer(id, n, hours), Manager(id, n, size) {}
	int calculateSalary() {
		return getCodingHours() * 500;
	}
};

int main() {
	int empId, codingHours, teamSize;
	string name;
	cout << "EMPID:";
	cin>>empI
}