#include<iostream>
using namespace std;
bool isprime(int num) {
	if (num <= 1)
		return false;
	for (int i = 2;i < num;i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cout << "Enter the prime numbers"<<endl;
	cin >> n;
	int sumArray[10];
	int count = 0, number = 2, sum = 0;
	while (count < n) {
		if (isprime(number)) {
			sum = sum + number;
			sumArray[count] = sum;
			count = count ++;
		}
		number = number + 1;
	}
	cout << "sum"<<endl;
	for (int i = 0;i < n;i++) {
		cout << "sum" << i + 1 << "prime number" << sumArray[i] << endl;

	}
	return 0;
}