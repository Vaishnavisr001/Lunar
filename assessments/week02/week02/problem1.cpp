//Number-star pattern
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number";
	cin >> num;
	for (int i = 0;i <= num;i++)
	{
		cout << "*";

		for (int j = 1;j <=i;j++)
			cout << j;

		for (int j = i - 1;j >= 1; j--)

			cout << j;

		if (i != 0)

      cout << "*";
		cout << endl;
	}

		

			for (int i = num - 1;i >= 1;i--)
			{
				cout << "*";
			for (int j = 1;j <=i;j++)
				cout << j;
			for (int j = i - 1;j >= 1;j--)
				cout << j;
			if (i != 0)

				cout << "*";
			cout << endl;
		}
			cout << "*" << endl;
		return 0;
	}
