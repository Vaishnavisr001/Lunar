#include<iostream>
using namespace std;
int secondnumber(int num)
{
	num = num / 10;
	return num % 10;
}
int main()
{
	int number;
	cout << "enter the number";
	cin >> number;
	int res = secondnumber(number);
	cout << "the second largest number is" << res << endl;
	return 0;
}