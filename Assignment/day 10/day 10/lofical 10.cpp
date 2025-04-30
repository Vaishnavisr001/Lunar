#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter the number of times you press the button";
	cin >> n;
	int current = 1;
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		current += 2;
		sum += current;
	}
	cout << "sum of all numbers after press" << sum << endl;
	return 0;
}