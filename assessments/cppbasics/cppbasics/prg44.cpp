#include<iostream>

using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (!(num1 ^ num2)) {
		cout << "equal";
	}
	else {
		cout << "not equal";
	}
	return 0;
}
	
