//Check for Armstrong number
#include<iostream>
using namespace std;
int main()
{
	int actual_no, sum = 0, temp, digit, count = 0;
	cout << "Enter the number";
	cin >> actual_no;
	temp = actual_no;
	while (temp != 0)
	{
		count++;
		temp = temp / 10;
	}
	temp = actual_no;
	while(temp!=0)
	{
		digit = temp % 10;
		sum = sum + (digit * count);
		temp = temp / 10;
		

	}
	if (sum == actual_no)
		cout << actual_no << "Armstrong number" << endl;
	else
		cout << actual_no << "Armstrong number" << endl;
	return 0;
}