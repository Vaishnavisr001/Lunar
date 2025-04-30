#include<iostream>
using namespace std;
int main() {
	int hour;
	cout << "enter the current hour:";
	cin >> hour;
	if (hour < 1 || hour>12) {
		cout << "Invalid hour" << endl;
		return 0;

	}
	cout << "clock rings at";
	for (int minute = 1;minute < 60;minute++)
	{
		if (hour % minute == 0) {
			cout << minute << " ";

		}
	}
	cout << endl;
	return 0;

}