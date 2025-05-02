//problem 2
#define MAX 100000
#include<iostream>
using namespace std;
int uniqueum(int arr[], int size)
{
	for (int i = 0;i < size - 1;i += 2) {
		if (arr[i] != arr[i + 1]) {
			return arr[i];
		}
	}
	return arr[size - 1];
}
int main() {
	int size;
	cin >> size;
	int arr[MAX];
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	int res = uniqueum(arr, size);
	cout << res;
	return 0;
}