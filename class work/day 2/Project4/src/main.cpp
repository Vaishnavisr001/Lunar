#include<iostream>
using namespace std;
class Test
{
	mutable int counter;
public:
	void update() const {
		counter++;
	}
};
int func(int);
int main() {
	const int val = 100;

	int r = 100;
	int ret = func(r);
	cout << ret << endl;
	ret = func(r);
	cout << ret << endl;
	return 0;
}
int func(int v)
{
	int temp = 1000;
	temp = temp + v;
	
		return temp;
}

