#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	cout << "enter two numbers";
	cin >> num1 >> num2;
	auto add = [](int num1, int num2) {
		return num1 + num2;

		};
	auto substract = [](int num1, int num2) {
		return num1 - num2;

		};
	auto multiplication = [](int num1, int num2) {
		return num1 * num2;

		};
	auto division = [](int num1, int num2) {
		return num1 / num2;

		};
	cout <<"addition:"<< add(num1, num2) << endl;
	cout <<"substraction"<< substract(num1, num2) << endl;
	cout << "multiplication:"<<multiplication(num1, num2) << endl;
	cout <<"division"<< division(num1, num2) << endl;
	return 0;
}


