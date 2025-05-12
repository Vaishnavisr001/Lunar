#include<iostream>
using namespace std;
int main()
{
	float r, area, cir;
	const float pi = 3.14;
	cin >> r;
	area = pi * r * r;
	cir = 2 * pi * r;
	cout << area << endl;
	cout << cir << endl;
	return 0;
}