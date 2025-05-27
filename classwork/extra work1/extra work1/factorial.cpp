#include<iostream>
using namespace std;
int factorial(int num) {
	int fact = 1,result;
	for (int i = 1;i <= num;i++) {
		 fact = fact * i;

		
	}
	return fact;
}
int main()
{
	int n;
	cout << "enter the number";
	cin >> n;
	if (n >=1) {
		cout << "the factorial of" << n << "is:" << factorial(n) << endl;
	}
	else {
		cout << "Not factorial";
	}
	return 0;
}