#include<iostream>
using namespace std;
int main()
{
	int age;
	cin >> age;
	if (age >= 18) {
		cout << "eligible";
	}
	else {
		cout << "not eligible";
	}
	return 0;
}
