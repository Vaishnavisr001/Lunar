#include<iostream>
using namespace std;
int NaturalNumber(int n)
{
	if (n <=1)
	{
		return n;
		
	}
	return n + NaturalNumber(n - 1);
}
int main()
{
	int num;
	cin >> num;
	int result = NaturalNumber(num);
	cout << result;
	
	cout << endl;
	return 0;


}