#include<iostream>
using namespace std;
class A {
private:
	int x;
protected:
	int y;
public:
	A() { 
		cout << "A constructor is called" << endl;
		x = 10;y = 20; }
	void dispA() {
		cout << "\t Hello from A" << endl;
		cout << "x=" << x <<"y="<<y<< endl;

	}
	void proMethod() {
		cout << "Protected method" << endl;
	}
};
class B :public A {
private:
	int a;
protected:
	int b;
public:
	B() {
		cout << "B constructor is called" << endl;
		a = 70;b = 87;
	}
	void dispb() {
		cout << "\t Hello from A" << endl;
		cout << "a=" << a << "b=" << b << endl;

	}
	void protectedB() {
		proMethod();
	}


};
int main()
{
	A objA;
	B objB;
	return 0;
	objA.dispA();
	objB.dispb();
	objA.dispA();
	objB.proMethod();//compile erropr acessing outside class
	return 0;


}