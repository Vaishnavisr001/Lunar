//check whether the array integer elements are palindrome or not
#include<iostream>
using namespace std;
int palindromeNumber(int n)
{
	int rev = 0, digit, actual_number = n;
	while (n > 0) {
		int digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;

	}
	return actual_number == rev;

}
int main() {
	int number;
	
	cin >> number;
	int arr[100];
	cout << "enter the number"<<endl;
	for (int i = 0;i < number;i++) {
		cin >> arr[i];
	}
	cout << "the result is"<<endl;
	for (int i = 0;i < number;i++) {
		if (palindromeNumber(number)) {
			cout <<  "number is palindrome"<<endl;
		}
		else {
			cout << "not palindrome"<<endl;
		}
		return 0;
	}
}