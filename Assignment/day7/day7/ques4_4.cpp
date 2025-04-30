#include<iostream>
using namespace std;
int sumdigit(int num) {
	bool digits[10] = { false };
	int sum = 0;
	while (num > 0) {
		int digit = num % 10;
		if (!digits[digit]) {
			digits[digit] = true;
			sum += digit;
		}
		num /= 10;
	}
	return sum;
}
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (sumdigit(num1) == sumdigit(num2))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;

}