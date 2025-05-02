//problem 7
#define MAX 200
#include<iostream>
using namespace std;
int commasplit(char input[], int arr[]) {
	int index = 0;
	int num = 0;
	for (int i = 0;input[i] != '\0';i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			num = num * 10 + (input[i] - '0');

		}
		else if (input[i] == ',') {
			arr[index] = num;
			index++;
			num = 0;
		}
	}
	arr[index] = num;
	index++;
	return index;
}
int countNum(int num, int arr[], int length) {
	int count = 0;
	for (int i = 0;i < length;i++) {
		if (arr[i] == num) {
			count++;

		}
	}
	return count;
}
int main()
{
	char firstline[MAX],secondline[MAX];
	int A[MAX], B[MAX];
	int SizeA, SizeB;
	cin.getline(firstline, MAX);
	cin.getline(secondline, MAX);
	SizeA = commasplit(firstline, A);
	SizeB = commasplit(secondline, B);

	for (int i = 0;i < SizeA;i++) {
		int n = A[i];
		int c = countNum(n, B, SizeB);
		cout << n << "_" << c << endl;

	}
	return 0;
}