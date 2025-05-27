#include<iostream>
#include<cstring>
using namespace std;
class student {
private:
	int roll_no;
	string name;
	int age;
	string course;
public:
	void setDetails(string n, int a, string c, int r) {
		name = n;
		age = a;
		course = c;
		roll_no = r;
	}
	void displayDetail() {
		cout << "NAME:" << name << endl;
		cout << "AGE:" << age << endl;
		cout << "COURSE:" << course << endl;
		cout << "ROLL NUMBER:" << roll_no << endl;
	}
};
int main()
{
	student s;
	s.setDetails("Vaishnavi", 23, "MCA", 101);
	s.displayDetail();
	return 0;

}



