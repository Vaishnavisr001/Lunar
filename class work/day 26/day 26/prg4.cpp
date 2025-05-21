#include<iostream>
#include<cstring>
using namespace std;
class student {
private:
	int roll_no;

	int age;
	string course;
public:

	void setRollno(int r) {
		roll_no = r;
	}
	int getRollno()
	{
		return roll_no;
	}
	void setAge(int a) {
		age = a;
	}
	int getAge() {
		return age;
	}
	void setCourse(string c) {
		course = c;
	}
	string getCourse() {
		return course;

	}
	void display()
	{

		cout << "AGE:" << age << endl;
		cout << "COURSE:" << course << endl;
		cout << "ROLL NUMBER:" << roll_no << endl;
	}
	int main()
	{
		student s;

		
		int a = 23;
		string c = "MCA";
		int r = 101;
		s.setAge(a);
		s.setCourse(c);

		s.setRollno(r);
		s.display();
		cout << s.getAge() << endl;
		cout << s.getCourse() << endl;

		cout << s.getRollno() << endl;
		return 0;
	}


};
		

