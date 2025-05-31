#include<iostream>
using namespace std;
template<class T>
class calculator {
protected:
	T num1, num2;
public:
	calculator(T n1, T n2) {
		num1 = n1;
		num2 = n2;

	}
	T addition() {
		return num1 + num2;

	}
	T subtraction() {
		return num1 - num2;
	}
	T multiplication()
	{
		return num1 * num2;

	}
	T division() {
		if (num2 != 0)
		{
			return num1 / num2;
		}
		else {
			cout << "Not possible division";
		}
	}
};
int main() {
	calculator<int> intCalc(30, 20);
	cout<<"Addition:"<<intCalc.addition()<<endl;
	cout<<"subtraction:"<<intCalc.subtraction()<<endl;
	cout<<"multiplication"<<intCalc.multiplication()<<endl;
	cout<<"divison:"<<intCalc.division()<<endl;
	

}
