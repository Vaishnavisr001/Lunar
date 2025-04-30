#include<iostream>
using namespace std;
bool prime(int num) {
	if (num < 2)
		return false;
	for (int i = 2;i * i <= num;i++)
		if (num % i == 0)

			return false;
	return true;
}
int main()
{
	int number;
	cout << "enter the number";
	cin >> number;
	int product = 1;
	int temp = number;
	while (temp > 0) {
		int digit = temp % 10;
		product *= digit;
		temp /= 10;

	}
	cout << "product is" << product;
}
else {
	cout << "the box remain" << endl;
	}
	return 0;
}
