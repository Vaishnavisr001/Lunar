#include<iostream>
using namespace std;
class Nums {
protected:
	int num1, num2;
public:
	void setNums(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;

	}

};
class Multipler :public Nums {
private:
private:
	int product;
public:
	void setValues() {
		cout << "enter 2 numbers:";
		cin >> num1 >> num2;
	}
	int multiply() {
		product = num1 * num2;
		return product;

	}
};
int main() {
	Multipler obj;
	obj.setValues();
	cout<<"product:"<<obj.multiply();
	return 0;
}