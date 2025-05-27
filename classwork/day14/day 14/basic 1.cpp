#include<iostream>
using namespace std;
int main() {
	int num1, num2, num3;
	cout << "enter the numbers";
	cin >> num1 >> num2 >> num3;
	int large;
	if (num1 >= num2 && num1 >= num3) {
		large = num1;
	}
	if (num2 >= num1 && num2 >= num3) {
		large = num2;
	}
	else {
		large = num3;
	}
	cout << "number is greater"<<large<<endl;
	return 0;
}
