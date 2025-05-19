#include<iostream>
using namespace std;
int sumArr(int*, int);
int sumArr(int* ptr, int n) {
	int sum = 0;
	//logic to calculate the sum of the list
	//pointer are converted to array notation
	for (int i = 0;i < n;i++)
		sum = sum + ptr[i];//pointers are directly converted into array notation
	return sum;
}

int main() {

	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << sumArr(list, cap) << endl;
	return 0;
}