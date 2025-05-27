#include<iostream>
using namespace std;
int palindromeNumber(int n)
{
	int rev = 0, digit, actual_number=n;
	while (n>0) {
		int digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;

	}
	return actual_number== rev;

}
int main() {
	int number;
	cout << "Enter the number";
	cin >> number;
	if (palindromeNumber(number)) {
		cout << "number is palindrome";
	}
	else {
		cout << "not palindrome";

	}

	
	return 0;
}