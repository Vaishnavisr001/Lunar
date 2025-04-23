#include<iostream>
#include "stringhandling.h"
#include<cstring>
using namespace std;
void stringHandling()
{
	char ch = 'A';
	char fName[20];//arrays of chars(size if fixed)
	string sName;//String(dynamically grows the size of the string)
	cout << "ch value" << ch << endl;
	cout << "enter first name";
	cin>> fName;
	cout << "Enter the second name:";
	cin >> sName;
	cout << "\n My Name is:" << fName << "\a " << sName << endl;
	char Name[] = "Hello";
	cout << sizeof(Name) << endl;
	cout << "String of length of Nmae" << strlen(Name) << endl;
	
}