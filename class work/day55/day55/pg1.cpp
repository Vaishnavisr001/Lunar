#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		int min_index = i;
		for (int j = i + 1;j < n;j++) {
			if (arr[min_index] > arr[j]) {
				min_index = j;

			}
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
}
void display(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void insertionSort(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;

		
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int arr[] = { 2,8,0,7,6,4,3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	selectionSort(arr, 7);
	display(arr, size);
	insertionSort(arr, 7);
	printArray(arr, size);
	return 0;

}
