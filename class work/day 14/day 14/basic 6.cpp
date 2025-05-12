//program to check whether a character is alphabet or not
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter the value:";
		cin >> ch;
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			cout << "This is an alphabet";
		}
		else if ((ch >= '0' && ch <= '9')) {
			cout << "This numeric";
		}
		else {
			cout << "Special symbols";
		}
		
		return 0;


}