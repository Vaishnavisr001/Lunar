#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if ((a ^ b) == 0) {
		cout << "number equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}
	return 0;
}