#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if ( num1 > num2 && num1 > num3) {
		cout << num1 << "is greatest" << endl;

	}
	else if (num2 > num1 && num2 > num3) {
		cout << num2 << "is greatest" << endl;

	}
	else {
		cout << num3 << "is greatest" << endl;
	}
	return 0;
}