//problem 3
#define MAX 100
#include<iostream>
using namespace std;
void countsmaller(int num[], int total, int result[]) {
	for (int i = 0;i < total;i++) {
		int count = 0;
		for (int j = i + 1;j < total;j++) {
			if (num[j] < num[i]) {
				count++;
			}
		}
		 result[i] = count;
	}
}
int main() {
	int total;
	int num[MAX];
	int result[MAX];
	cin >> total;
	for (int i = 0;i < total;i++) {
		cin >> num[i];
	}
	countsmaller(num, total, result);
	for (int i = 0;i < total;i++) {
		cout << result[i]<<" ";
	}
	return 0;
}