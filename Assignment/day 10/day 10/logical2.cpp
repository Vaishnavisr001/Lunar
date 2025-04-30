#include<iostream>
using namespace std;
int sumOfDigit(int number)
{
	int sum = 0;
	while (number > 0) {
		int digit = number % 10;
		if (digit % 2 != 0) {
			sum = sum + digit;
		}
		number = number / 10;
	}
	return sum;
}
int main()
{
	int coinnumber;
	cout << "enter the number";
	cin >> coinnumber;
	int res = sumOfDigit(coinnumber);
	cout << "sum of odd digit" << res << endl;
	return  0;

}