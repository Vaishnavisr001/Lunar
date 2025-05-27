#include<iostream>
using namespace std;
int main() {
	int num1, num2, num3,num4,num5;
	cout << "enter the numbers";
	cin >> num1 >> num2 >> num3>>num4>>num5;
	int large=num1;
	

	if (num2 > large)
	{
		large = num2;
	}
	if (num3 > large)
	{
		large = num3;

	}
	if (num4 > large)
	{
		large = num4;

	}
	if (num5 > large)
	{
		large = num5;
	}
	/*else {
		large = num1;
	}*/
	cout << large << "is the largest";
	return 0;
}
