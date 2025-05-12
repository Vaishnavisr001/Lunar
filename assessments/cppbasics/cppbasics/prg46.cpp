#include<iostream>

using namespace std;
int main()
{
	int octal, decimal = 0, i = 0, rem;
	cin >> octal;
	while (octal != 0) {
		rem = octal % 10;
		decimal = decimal + pow(8, i);
		octal = octal / 10;
		i++;
	}
	cout << decimal;
	return 0;
}
