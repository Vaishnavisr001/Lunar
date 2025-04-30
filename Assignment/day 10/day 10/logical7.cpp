#include<iostream>
using namespace std;
bool even(int digit)
{
	return digit % 2 == 0;
}
int main()
{
	string code;
	cout << "enter code";
	cin >> code;
	for (char ch : code) {
		if (ch != '0')
		{
			int digit = ch - '0';
			cout << "first non zero digit" << digit << endl;
			if (even(digit)) {
				cout << "code is valid" << endl;
			}
			else
			{
				cout << "the code is invalid" << endl;
			}
		}
	}
	cout << "the code contains only zero" << endl;
	return 0;
}