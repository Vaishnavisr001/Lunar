#include<iostream>
using namespace std;
int main()
{
	int num1, num2 ;
	cout << "enter the first number";
	cin >> num1;
	cout << "enter 2nd num";
	cin >> num2;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	cout << "swapped num1" << "="<<num1<<endl;
	cout <<"swapped num2"<<"="<< num2 <<endl;
	return 0;

	


}