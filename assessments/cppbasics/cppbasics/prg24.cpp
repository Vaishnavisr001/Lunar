#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];
		sum = arr[i] + sum;
		

	}
	cout << sum;
	return 0;

}