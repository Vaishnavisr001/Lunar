//Check for Armstrong number
#include<iostream>
using namespace std;
int main()
{
	int num, remainder, res{}, actual_no;
	cout << "Enter the number";
	cin >> num;
	actual_no = num;
	while (num != 0) {
		remainder = num % 10;
		res = res + pow(remainder, 3);
		num = num / 10;


	}
	if (res == actual_no)
	{
		cout << actual_no << "is an Amstrong Number" << endl;

	}
	else {
		cout << actual_no << "is not an Amstrong number" << endl;

	}
	return 0;
}