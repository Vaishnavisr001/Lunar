#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter positive numbr";
	cin >> n;
	int sum = 0;
	int pro = 1;
	int temp = n;
	while (temp > 0) {
		int digit = temp % 10;
		sum += digit;
		pro += digit;
		temp /= 10;
	}
	cout << "sum=" << sum << endl;
	cout << "product =" << pro << endl;
	return 0;
}