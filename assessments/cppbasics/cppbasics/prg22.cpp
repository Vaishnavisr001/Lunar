#include<iostream>
using namespace std;
int main()
{
	int arr[30];
	int n;
	cin >> n;


	for (int i = 0;i < n;i++) {
		cin >> arr[i];
	}

	int small = arr[0];
	int large = arr[0];
	for (int i = 0;i <= n - 1; i++) {
		if (arr[i] <= small)
			small = arr[i];

		if (arr[i] >= large)
			large = arr[i];

	}
	cout << small << endl;
	cout << large << endl;

	return 0;


}