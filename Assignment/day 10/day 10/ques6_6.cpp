#include<iostream>
using namespace std;
bool sumseven(int a, int b) {
	int sum = a + b;
	return (sum % 2 == 0);
}
int main()
{
	int num1, num2;
	cout << "Enter the numbers";
	cin >> num1 >> num2;
	if (sumseven(num1, num2)) {


		cout << "the sum is even";
	}
	else{
		cout << "the sum is odd";
	}
	return 0;
}