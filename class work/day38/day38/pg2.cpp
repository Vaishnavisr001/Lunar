#include<iostream>
#include <list>
#include "pg2.h"
using namespace std;
class Employee {
	int id;
	string name;
public:
	Employee(int id,string name):id(id),name(name){}
	int getId() const {
		return id;

	}
	void setId(int id) {
		this->id = id;
	}
	string getName() {
		return name;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void display() {
		cout << "Name:" << name << "|" << " " << "ID:" << id << endl;

	}
	bool operator==(const Employee& other)const {
		return id == other.id;
	}
};
int main()
{
	Employee e1(101, "vaish");
	Employee e2(102, "helo");
	Employee e3(103, "hgtf");
	Employee e4(104, "vgftgj");
	Employee e5(105, "hghi");
	Employee e6(106, "guh");
	Employee e7(107, "hguyu");
	std::list<Employee>  listemp;
	listemp.push_front(e1);
	listemp.push_back(e2);
	listemp.emplace_front(e3);
	listemp.emplace_back(e4);
	listemp.insert(listemp.begin(), e5);
	for (auto lE : listemp)
		lE.display();
	listemp.reverse();
	cout << "---------------------------" << endl;
	for (auto lE : listemp)
		lE.display();
	listemp.remove(e2);
	cout << "----------------------" << endl;
	for (auto lE : listemp)
		lE.display();
	







}