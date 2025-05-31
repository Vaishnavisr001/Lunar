#include<iostream>
using namespace std;
class Student {
protected:
	string name;
	int rollNo;

	

public:
	virtual void getDetail() = 0;
	virtual void showStudentDetails() = 0;
	virtual void calculate() = 0;

};
class Marks :public Student {
	float mark1, mark2, mark3, total;
public:
	void getDetail() override {
		cout << "Enter Name" << name << endl;
		cin >> name;
		cout << "Enter the RollNo:" << rollNo << endl;
		cin >> rollNo;
		cout << "Enter the marks:" << endl;
		cin >> mark1 >> mark2 >> mark3;

	}
	void calculate() override
	{
		total = mark1 + mark2 + mark3;

	}
	void showStudentDetails() override {
		cout << "Name:" << name << endl;
		cout << "Marks:" << total << endl;

	}
	class sports: public Student{

	

	
};`