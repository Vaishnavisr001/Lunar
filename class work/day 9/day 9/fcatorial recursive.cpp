#include<iostream>
using namespace std;
int fact(int n)
{
	if (n == 0|| n==1){
		return true;

	}
	else {
			int val= n * fact(n - 1);
			return val;
	
	}
}
int main()
{
	int n;
	cout << "enter a number";
	cin >> n;
	if (n < 0) {
		cout << "its negative number";
	}
	else {
		int rect = fact(n);
		cout << "factorial numbers:" << rect << endl;
	}
	return 0;
}
