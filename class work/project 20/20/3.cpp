#include<iostream>
using namespace std;
int *func(int a) {
	static int sum = 0;//use static as a fix to avoid dangling ptr
	sum += a;
	cout << "BA of sum=" << (unsigned long int) & sum << endl;
	return &sum;

}
int main()
{
	int* ptr = func(101);//dangling ptr
	cout << *ptr << "/t address of sum=" << (unsigned long int)ptr << endl;
	*ptr = 202;
	ptr = func(303);
	cout << *ptr << endl;
	return 0;


}
