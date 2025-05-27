#include<iostream>
using namespace std;
class Test {
	int v;
public:
	Test()
	{
		v = 0;
	}
	Test(int val) {
		v = val;
	}
	void setV(int val) {
		this->v = val;
	}
	int getV()
	{
		return this-> 
};
int main()
{
	Test t;
	cout << "v=" << t.getV() << endl;


}