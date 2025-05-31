#include<iostream>
using namespace std;

class myArray {
public:
	int operator()(int a, int b) {
		return a + b;

	}
};
int main() {
	myArray add;
	int result = add(7, 8);
	cout << "Result" << result << endl;
	return 0;

}