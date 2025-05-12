#include<iostream>
using namespace std;
int Sum(int n) {
	
	int sum = 0;
	
		for (int i = 1;i <= n;i++) {
			sum = sum + i;

		}
	
	return sum;

}
int main()
{
	int num;
	cin >> num;

	cout << Sum(num);
	return 0;
}