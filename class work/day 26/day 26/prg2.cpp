#include<iostream>
#include<cstring>
using namespace std;
class student {
private:
	int roll_no;
	char name[20];

public:
	void setName(char* s) {
		strcpy(name, s);
	}
	char* getName() {
		return name;
	}
	void setRollno(int r) {
		roll_no = r;
	}
	int getRollno() {
		return roll_no;
	}
	void display() {
		cout << "Name:" << name << endl;
		cout << "RollNO:" << roll_no << endl;

	}
};
int main() {
	char n[] = "abc";
	char str2[1024] = "plo";
	int r = 101;
	student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.display();
	cout << s1.getName() << endl;
	cout << s1.getRollno() << endl;
	strcat(str2, s1.getName());
	cout << str2 << endl;
	return 0;



}