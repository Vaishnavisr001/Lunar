#include<iostream>
using namespace std;
int LeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		cout << "leap year";
	}
	else {
		cout << "Not leap year";
	}
	return year;
}
int main() {
	int y;
	cin >> y;
	cout << LeapYear(y);
	return 0;
}
