#include<iostream>

using namespace std;
int main()
{
	int binary[32], decimal, i = 0;
	cin >> decimal;
	if (decimal == 0) {
		cout << "Binary :0" << endl;
		return 0;

	}
	while (decimal> 0) {
		binary[i] = decimal% 2;
		decimal = decimal + pow(8, i);
		decimal = decimal/ 2;
		i++;
	}
	for (int j = i - 1;j >= 0;j--) {
		cout << binary[j];
	}
	cout << endl;
	return 0;
}
