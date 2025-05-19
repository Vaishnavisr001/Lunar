//POINTERS ARITHEMETIC INCREASED BY THE ADDRESS
#include<iostream>
using namespace std;
int main()

{
	int arr[3] = { 1,2,3 };
	cout << arr[0] << arr[1] << arr[2];
	int* ptr = nullptr;
	ptr = &arr[0];
	cout << *ptr;
	ptr = &arr[1];
	ptr=(arr+1)


}