#include<iostream>
using namespace std;
int main()
{
	int a, b, rem;
	cin >> a >> b;
	rem = a - (a / b) * b;
	cout << rem;
	return 0;
}