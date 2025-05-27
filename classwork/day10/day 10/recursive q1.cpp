#include<iostream>
using namespace std;
void Number(int n)
{
	if (n > 0)
	{
		cout << "The numbers are" << n << endl;
		Number(n - 1);
	}
}
int main()
{
	int number;
	cout << "enter the number";
	cin >> number;
	Number( number);
	cout << endl;
	return 0;


}