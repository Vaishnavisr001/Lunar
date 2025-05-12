#include<iostream>
using namespace std;
int main()
{
	int num, sum = 0;
	cin >> num;
	for (int i = 0;i <= num / 2;i++) {
		if (num % 2 == 0) {
			sum += i;
		}

	}
	if (sum == num) {
		cout << "perfect square";
	}
	else {
		cout << "not";
	}
	return 0;
}