#include<iostream>
using namespace std;

	int newnumber(int num1, int num2) {
		int lastdigit = num1 % 10;
		while (num2 >= 10) {
			num2 = num2 / 10;
		}
		int firstdigit = num2;
		return(lastdigit * 10 + firstdigit);
	}
	int main()
	{
		int a, b;
		cout << "Enter the first number";
		cin >> a;
		cout << "enter the last number";
		cin >> b;
		int result = newnumber(a, b);
		cout << "new number" << result << endl;
		return 0;

	}
