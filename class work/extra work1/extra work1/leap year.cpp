#include<iostream>
using namespace std;
bool leapyear(int year) {
	if (year % 4 == 0) {
		return true;
	}
	if (year % 100 == 0) {
		return false;

	}
	if (year % 400 == 0) {
		return true;
	}
}
int main() {
	int years;
	cout << "enter the year:";
	cin >> years;
	cout << years << "is a leap year" << leapyear(years);
	return 0;

}