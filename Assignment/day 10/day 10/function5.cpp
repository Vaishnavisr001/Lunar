#include<iostream>
using namespace std;
int sumofSquare(int n) {
	if (n == 0)
		return 0;
	return(n * n) + sumofSquare(n - 1);
}
int main()
{
	int n;
	cout << "enter no of steps:" << endl;
		cin >> n;
	int res = sumofSquare(n);
	cout << "sum of square upto step" << n << "is:" << res <<endl;
	return 0;
}