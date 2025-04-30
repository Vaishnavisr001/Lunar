#include<iostream>
using namespace std;
int sumDigits(int num)
{
	int sum = 0;
	while (num > 0) {
		sum = sum + (num % 10);
		num = num / 10;
	}
	if (sum >= 10)
		return sumDigits(sum);
	else
		return sum;
}
int main()
{
	int number;
	cout << "Enter a number";
	cin >> number;
	int result = sumDigits(number);
	cout << "The single digit is:"<<result;
	return 0;
}