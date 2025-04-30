#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 2 && n <= 10)
	{
		for (int i = n;i >=1;i--) {
			for (int j = 1;j <= i;j++) {
				cout << "*";
			}
			cout << endl;
		}

	}
	else {
		cout << "Invalid input" << endl;
	}
	return 0;
}
