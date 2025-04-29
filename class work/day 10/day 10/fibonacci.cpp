#include<iostream>
using namespace std;
int FibanocciNumber(int n)
{
	if (n ==0||n==1)
	{
		return n;

	}
	return FibanocciNumber(n-1) + FibanocciNumber(n - 2);
}
int main()
{
	int num=10;
	cout << "Enter the number";
	cin >> num;
	int result = FibanocciNumber(num);
	cout << "The fibanocci numbers are"<<result<<","<<endl;

	cout << endl;
	return 0;


}