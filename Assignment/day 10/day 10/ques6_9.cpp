#include<iostream>
using namespace std;
int power(int a, int b) {
	if (b == 0)
		return 1;
	else
		return a * power(a, b - 1);

}
int main()
{
	int base, exponent;
	cout << "Enter the base";
	cin >> base;
	cout << "enter the exponent";
	cin >> exponent;
	int result = power(base, exponent);
	cout << base << "^" << exponent << "=" << result << endl;
	return 0;
}
