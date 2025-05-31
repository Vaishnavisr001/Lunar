#include<iostream>
using namespace std;
template<class T1,class T2>
class Box {
private:
	T1 data1;
	T2 data2;
public:
	Box(T1 value1,T2 value2):data1(value1),data2(value2) {}
	void printData() {
		cout << "Data:" << data1<< endl;
		cout << "Data:" << data2 << endl;
	}
	};
	int main()
	{
		Box<int,float> intBox(10,23.2);
		Box<float,string> stringBox(24.5,"abcfgh");
		intBox.printData();
		stringBox.printData();
	
	}
