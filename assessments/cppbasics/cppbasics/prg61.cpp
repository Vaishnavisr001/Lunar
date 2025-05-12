#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z') {
		cout << "uppercase" << endl;
	}
	else {
		cout << "lowercase" << endl;
	}
	return 0;
}