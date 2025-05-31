#include<iostream>
using namespace std;
void greet() {
	cout << "Hello " << endl;

}
int add(int x, int y) {
	return x + y;

}
int subs(int x, int y) {
	return x - y;

}
int main() {
	void(*fptr)() = greet;//function pointer
	fptr();
	int(*fptr1)(int, int) = add;
	cout << fptr1(10, 20) << endl;
	fptr1 = subs;
	cout << fptr1(20, 10) << endl;


}