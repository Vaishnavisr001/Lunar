#include<iostream>

using namespace std;
int main()
{
	int decimal, i = 0;
	char hex[20];
	cin >> decimal;
	if (decimal == 0) {
		cout << "hexadecimal :0" << endl;
		return 0;

	}
	while (decimal > 0) {
		int rem = decimal % 16;
		if (rem < 10)
			hex[i] = rem + '0';
		else
			hex[i] = rem - 10 + 'A';
		decimal = decimal / 16;
		i++;
	}
	for (int j = i - 1;j >= 0;j--) {
		cout << hex[j];
	}
	cout << endl;
	return 0;
}
