//find a name of the cricketer in a list of cricketers in a 2D using Bsearch
#include<iostream>
using namespace std;
int binarysearch(int arr[],  int target,int size) {
	int start = 0;
	int end = size - 1;
	int middle = start + (end - start) / 2;

	while (start <= end) {
		middle = start + (end - start) / 2;
		if (arr[middle] == target) {
			return middle;
		}
		else if (arr[middle] < target) {
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
		return -1;

	}
}

int main() {
	int arr[] = { 3,6,7,11,32,33,53 };
	int target = 7;
	cout<<binarysearch(arr,target,7);
	
}


