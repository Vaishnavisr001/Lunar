#include<iostream>
using namespace std;
class student {
protected:
	int roll_no;
	string name;
public:
	void display(string str1) {

		cout << "Hello world" << endl;
		cout << "name:" << name << endl;
	}
	void setName(string s) {
		name = s;
	}

};
int main()
{
	student s;
	cout << sizeof(s) << endl;
	//s.name = "Vaishnavi";
	//s.roll_no = 101;
	//cout << s.name << s.roll_no << endl;

	s.display("vaish");
	s.setName("vaishn");
	s.display("vaishavii");

	return 0;

}