#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num = 1;
	for (int i = 1;i <= n;i++) {

		for (int k = 1;k <= i;k++) {
			cout <<num<<" ";
			num++;
		}
		cout << endl;
	}
	return 0;
}
