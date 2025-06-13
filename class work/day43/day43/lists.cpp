#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

class Employee {
	int id;
	string name;
public:
	Employee() :id(0), name(" ") {}
	Employee(int id, string name) : id(id), name(name) {}
	Employee(const Employee& others) {
		this->id = others.id;
		this->name = others.name;
	}
	void disp() const { cout << "ID: " << id << "\tName: " << name << endl; }
	int getId() const { return id; }
	string getName() const { return name; }
	void setName(string name) { this->name = name; }
	void setId(int id) { this->id = id; }
	void setValues() { cin >> id >> name; }

	friend istream& operator>>(istream& is, Employee& e) {
		is >> e.id >> e.name;
		return is;
	}
};

int main()
{
	istream_iterator<Employee> inIt(cin);
	istream_iterator<Employee> endIt;

	list<Employee> empList;

	while (inIt != endIt)
	{
		empList.push_back(*inIt);
		++inIt;
	}

	for (const auto& e : empList)
		e.disp();

	return 0;
}
