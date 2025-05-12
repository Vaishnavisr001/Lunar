#include<iostream>

using namespace std;
int main()
{
	char hex[20];
	int decimal = 0;
	int base = 1;

	cin >> hex;
	int length = strlen(hex);
	for (int i = length - 1;i >= 0;i--) {
		char digit = hex[i];
		int value;
		if (digit >= '0' && digit <= '9') {
			value = digit - '0';
		}
		else if (digit >= 'A' && digit <= 'F') {
			value = digit - 'A' + 10;
		}
		else if (digit >= 'a' && digit <= 'f') {
			value = digit - 'a' + 10;
		}
		decimal = decimal + value + base;
		base = base * 16;
	}
	cout << decimal;
	return 0;
}

