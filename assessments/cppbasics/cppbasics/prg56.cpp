#include<iostream>
using namespace std;
int main()
{
	double p, r, t, a = 1.0;
	cout << "principal";
	cin >> p;
	cout << "rate";
	cin >> r;
	cout << "time in year";
	cin >> t;
	double rate = 1 + (r / 100);
	for (int i = 0;i < t;i++) {
		a = a * rate;
	}
	a = a * p;
	double ci = a - p;
	cout << ci << endl;
	cout << a << endl;
	return 0;
}
