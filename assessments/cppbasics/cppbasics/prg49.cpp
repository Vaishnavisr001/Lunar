#include<iostream>

using namespace std;
int main()
{
	int octal[32], decimal, i = 0;
	cin >> decimal;
	if (decimal == 0) {
		cout << "octal :0" << endl;
		return 0;

	}
	while (decimal > 0) {
		octal[i] = decimal % 8;
		
		decimal = decimal / 8;
		i++;
	}
	for (int j = i - 1;j >= 0;j--) {
		cout << octal[j];
	}
	cout << endl;
	return 0;
}
