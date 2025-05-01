#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter number of elements";
	cin >> n;
	int arr[100];
	cout << "Enter the elements";
	for (int i = 0;i < n;i++) {
		cin >> arr[i];

	}
	cout << "Leader in the array";
	for (int i = 0;i < n;i++) {
		bool isleader = true;
		for (int j = i + 1;j < n;j++) {
			if (arr[i] < arr[j]) {
				isleader = false;
				break;
			}
		}
		if (isleader) {
			cout << arr[i] << " ";

		}
	}
	cout << endl;
	return 0;
}