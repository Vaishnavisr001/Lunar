//problem 6
#define MAX 200
#include<iostream>
using namespace std;
void reversenumber(int num[], int startindex, int endindex) {
	while (startindex < endindex) {
		int temp = num[startindex];
		num[startindex] = num[endindex];
		num[endindex] = temp;
		startindex++;
		endindex--;
	}
}
	int main()
	{
		int total, size;
		int numbers[MAX];
		
		cin >> total;
		for (int i = 0;i < total;i++) {
			cin >> numbers[i];
		}
		cin >> size;

		for (int currindex = 0;currindex < total;currindex += size) {
			int startindex = currindex;
			int endindex = currindex + size-1;
			if (endindex >= total) {
				endindex = total - 1;
			}
			reversenumber(numbers, startindex, endindex);
		}
		for (int i = 0;i < total;i++) {
			cout << numbers[i] << " ";
		}
		return 0;

	}
