#include<iostream>

using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int diff = num1 - num2;
	int sign = diff >> 31;
	int max = num1 - sign * diff;
	int min = num2 + sign * diff;
	cout << max << endl << min << endl;
	return 0;
}
