#include<iostream>
#include<cmath>
using namespace std; 
	bool isprime(int num) {
		if (num <= 1)
			return false;
		for (int i = 2;i <= sqrt(num);i++) {
			if (num % i == 0) {
				return false;

			}
		}
		return true;
	}
	int main()
	{
		int num, pro = 1;
		cin >> num;
		int temp = num;
		while (temp > 0) {
			int digit = temp % 10;
			pro *= digit;
			temp /= 10;
		}
		cout << pro;
		if (isprime(pro)) {
			cout << "prime number" << endl;
		}
		else {
			cout << "not prime" << endl;
		}
		return 0;
	}
