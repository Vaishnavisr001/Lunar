//Check for Armstrong number
#include<iostream>
using namespace std;
bool amstrong(int actual_no)
{
	int  sum = 0, temp, digit, count = 0;
	cout << "Enter the number";
	cin >> actual_no;
	temp = actual_no;
	while (temp != 0)
	{
		count++;
		temp = temp / 10;
	}
	temp = actual_no;
	while (temp != 0)
	{
		digit = temp % 10;
		sum = sum + (digit * count);
		temp = temp / 10;


	}
	return sum == actual_no;
}
int main()
{
	int limit;
	cout << "enter the amstrong number";
	cin >> limit;
	if (limit > 1)
	{
		cout << "Enter the limit";
		return 1;
	}
	else {
		cout << "enter the amstrong number from " << limit << "to:" << endl;

	}
	for (int i = 0;i <= limit;++i) {
		if (amstrong(i)) {
			cout << i << " ";
		}
		cout << endl;
		return 0;
	}
	
}