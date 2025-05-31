#include<iostream>
using namespace std;
class A {
protected:
	int a;
	void disAPrt() {
		cout << "A:Method of protected" << endl;

	}
public:
	void dispA() {
		cout << "A:a=" << a << endl;

	}
};
class B : private A {
public:
	void dispB() {
		a = 20;
		disAPrt();
		dispA();
	}
};
class C :public B
{
public:
	void dispC() {
		dispB();
	}
};
	int main() {
		C objc;
		objc.dispC();
		objc.dispB();


}