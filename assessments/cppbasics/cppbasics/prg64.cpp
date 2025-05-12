#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i <= n;i++) {
		if (n % 2 != 0) {
			cout << i << " ";
		}

	}
	cout << endl;
	return 0;
}