#include<iostream>
using namespace std;
class smartPointer {
	int* ptr;//actual pointer
public:
	explicit smartPointer(int* p = NULL) {//constructor
		ptr = p;
	}
	~smartPointer() {//deconstructor
		delete ptr;
	}//overloading dereferencing operator
	int& operator*() {
		return *ptr;
	}
};
int main() {
	smartPointer ptr(new int());
	*ptr = 20;
	cout << *ptr;
}
//we donot need to call delete ptr:when the object 
//ptr goes out of scope,the deconstructor for it is automatically
//called and destructor does delete ptr