#include<iostream>
#include<thread>
using namespace std;
void greet() {
	cout << "helloWorld" << endl;

}
void display(int x) {
	cout << "X:" << x << endl;
}
void modifyX(int& x) {
	x *= 2;
}

int main()
{
	int val = 10;

	thread t1(greet);
	t1.join();//here join will attach the thread to the main thtread(t1 thread)
	cout << "end " << endl;
	t1.join();//main threda will wait until this t1 is completed
	thread t2(display, 101);
	t2.join();
	thread t3(modifyX, ref(val));//call by reference

	cout << "val:" << val << endl;
	t3.join();
	cout << "val:" << val << endl;

	return 0;

}