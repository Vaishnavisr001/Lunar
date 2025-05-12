#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << endl << b << endl;
	return 0;
}
