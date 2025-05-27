#include<iostream>
using namespace std;
class vechicle {
protected:

	string type;
	int speed;
	string color;
public:
	void setvechicleDetails(string t, int s,string c) {
		type = t;
		speed = s;
		color = c;




	}
};
class car :public vechicle {
public:
	void displaydetail() {
		cout << "type:" << type << endl;
		cout << "speed:" << speed << endl;
		cout << "color:" << color << endl;

	}
};
int main() {
	car c;
	c.setvechicleDetails("Maruthi",180,"yellow");
	c.displaydetail();
	return 0;
}