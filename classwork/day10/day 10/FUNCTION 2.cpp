//tower of oddity
#include<iostream>
using namespace std;
void oddfloor(int n) {
	if (n < 1)
		return;
	oddfloor(n - 2);
	if (n % 2 == 1)
		cout << n << endl;
}
int main()
{
	int number;
	cout << "Enter the number";
	cin >> number;
	oddfloor(number);
	cout << endl;
	return 0;

}
;