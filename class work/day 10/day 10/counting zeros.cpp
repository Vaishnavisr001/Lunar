#include<iostream>
using namespace std;
int countzero(int n) {
	if (n == 0)
		return 0;
	if (n % 10 == 0)
		return 1 + countzero(n / 10);
	else
		return countzero(n / 10);

	
}
int main()
{
	int number;
	cout << "enter the number";
	cin >> number;
	int result = countzero(number);
	cout << result;

	cout << endl;
	return 0;

}