#include<iostream>
using namespace std;
int main()
{
	int a[3] = { 10,20,30 };
	int* ptr = a;
	cout << *ptr++ << endl;
	cout << *++ptr << endl;//this points to the next location//++*ptr->increement
	cout << *ptr++ << endl;

	ptr = a;//reassign to the base address
	int product = *ptr * *ptr;
	cout << "product:" << product << endl;
	cout << sizeof(ptr) << " " << sizeof(void*) << endl;
	return 0;

}