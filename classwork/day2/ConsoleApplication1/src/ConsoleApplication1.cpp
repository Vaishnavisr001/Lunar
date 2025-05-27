#include<iostream>
#include "addition.h"
using namespace std;
int addition(int, int);//prototype of function
int substract(int, int);
int multiply(int, int);
int division(int, int);
int main()
{
	int val1, val2;
	int choice;
	int ret = 0;
	cout << "Enter the choices(1-4)";
	cout << "1.Addition:" << endl;
	cout << "2.substraction:" << endl;
	cout << "3.multiplication:" << endl;
	cout << "4.division:" << endl;
	cin >> choice;
	cout << "Enter two numbers";
	cin >> val1 >> val2;
	switch (choice) {
	case 1:addition(val1, val2);
		break;
	case 2:substract(val1, val2);
		break;
	case 3:multiply(val1, val2);
		break;
	case 4:division(val1, val2);
		break;
	default:
		cout << "Invalid choice" << endl;

	}
	
	return 0;

}

