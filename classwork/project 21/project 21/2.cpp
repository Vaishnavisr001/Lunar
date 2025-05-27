#include<iostream>
using namespace std;
int main() {
	int* ptr = nullptr;
	int a = 10;
	cout << a<<endl;
	cout << ptr<<endl
		;
	cout << &a << endl;
	cout << &ptr << endl;
	ptr = &a;
	cout << ptr;
	cout << *ptr;
	*ptr = 20;
	cout << *ptr << endl;

	
	return 0;

}