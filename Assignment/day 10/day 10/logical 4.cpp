#include<iostream>
using namespace std;
int main() {
	int number, count = 0;
	cout << "ente the code";
	cin >> number;
	while (number > 0) {
		if (number % 2 == 1) {
			count++;
		}
		number = number / 2;
	}
	cout << "number is binary" << count << endl;
	return 0;

}