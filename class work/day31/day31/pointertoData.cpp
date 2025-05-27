//pointer to Data Member of class
#include <iostream>
using namespace std;

class Data {
public:
	int a;
	void print()
	{
		cout << "a is :" << a;

	}
};
int main()
{
	Data d, * dp;
	dp = &d;//pointer to object
	int Data::* ptr = &Data::a;//pointer to data member 'a'
	d.*ptr = 0;
	d.print();
	dp->*ptr = 20;
	dp->print();
}
