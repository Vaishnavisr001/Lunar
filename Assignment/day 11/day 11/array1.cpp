#include<iostream>
using namespace std;
int main()
{
	int n, sum;
	cout << "Enter the number of elements in the array";
	cin >> n;
	int arr[100];
	cout << "Enter" << n << "non-negative integers" << endl;
	for (int i = 0;i < n;i++) {
		cin >> arr[i];

	}
	cout << "enter the sum of find";
	cin >> sum;
	bool found = false;
	for (int start = 0;start < n;start++)
	{
		int currSum = 0;
		for (int end = start = 0;end < n;end++) {
			currSum += arr[end];
			if (currSum == sum) {
				cout << "Sum found between indexes" << start << "and" << end << endl;
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	if (!found){
		cout << "no subarray found" << endl;
}
return 0;

}
