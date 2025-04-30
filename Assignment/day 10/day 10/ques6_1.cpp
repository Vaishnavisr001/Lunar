#include<iostream>
using namespace std;

	int middlevalue(int a, int b, int c) {
		if ((a > b && a < c || a<b && a>c))
			return a;

		else if ((b > a && b > c) || (b < a && b > c))
			return b;
		else
			return c;
	}
	int main()
	{
		int num1, num2, num3;
		cout << "Enter the number";
		cin >> num1 >> num2 >> num3;
		int mid = middlevalue(num1, num2, num3);
		cout << "The number is" << mid;
		return 0;
	}

