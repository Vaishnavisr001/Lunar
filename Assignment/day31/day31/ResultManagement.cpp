#include<iostream>
using namespace std;
class Student {
protected:
	int rollNo;
	string Name;
	int age;
public:
	Student(int r, string n, int a) :rollNo(r), Name(n), age(a) {}
	void setRollNo(int r)
	{
		rollNo = r;

	}
	void setName(string n) {
		Name = n;

	}
	void setAge(int a) {
		age = a;
	}
	int getRollNo() {
		return rollNo;

	}
	string getName() {
		return Name;

	}
	int getAge() {
		return age;
	}
	void displayStudent() {
		cout << "ROLLNUMBER:" << getRollNo() << endl;
		cout << "Name:" << getName() << endl;
		cout << "AGE:" << getAge() << endl;
	}

};
class Marks :public Student {
private:
	int mark1, mark2, mark3, total;
	float avg;
public:
	Marks(int r, string n, int a, int m1, int m2, int m3) :Student(r, n, a), mark1(m1), mark2(m2), mark3(m3) {

		avg = 0;
		total = 0;
	}
	void setMarks(int m1, int m2, int m3) {
		mark1 = m1;
		mark2 = m2;
		mark3 = m3;
	}
	void calculate() {
		total = mark1 + mark2 + mark3;
		avg = total / 3.0f;
	}
	float getAverage() {
		return avg;
	}
	int getTotal() {
		return total;
	}
	void display(){
		cout << "Total marks:" << getTotal() << endl;
		cout << "Average mark:" << getAverage() << endl;
	}

};
int main() {
	Marks m(101, "vaish", 50, 68, 98, 67);
	m.calculate();
	m.displayStudent();
	m.display();
	return 0;
}