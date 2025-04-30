#include<iostream>
using namespace std;
bool leapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400==0))
	return true;
	else
		return false;
}
int main()
{
	int year;
	cout << "enter the year";
	cin >> year;
	if (leapyear(year))
	{
		cout << year << "leap year" << endl;;

	}
	else {
		cout << year << "not a leap year" << endl;
	}
	return 0;
}