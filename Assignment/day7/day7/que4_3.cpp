#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter number";
	cin >> num;
	int productOdd = 1;
	int ProductEve = 1;
	int position = 1;
	while (num > 0)
	{
		int digit = num % 10;
		if (position % 2 == 0) {
			ProductEve += digit;
		else {
			productOdd += digit;
		}
		num /= 10;
		position++;
		}
		if (productOdd == ProductEve) {
			cout << "yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
		return 0;
	}
}
