#include<iostream>
using namespace std;
int main()
{
	float temp;
	cin >> temp;
	if (temp > 35) {
		cout << "Hot";
	}
	else if (temp >= 20) {
		cout << "warm";
	}
	else {
		cout << "cold";
	}
	return 0;
}