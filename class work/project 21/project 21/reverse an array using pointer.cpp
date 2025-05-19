#include<iostream>
using namespace std;
static void revArr(int* arr, int size) {
	int i = 0, j = size - 1;
	while (i < j) {
		int temp = *(arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;
		i++;
		j--;
	}

}

int main() {

	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	revArr(list, 5);
	for (int i = 0;i < 5;i++)
		cout <<list[i]<<" ";
	return 0;
}
