//create a class with stack operation
#include<iostream>
#define MAX 100
using namespace std;
class Stack {
private:
	int top;
	int bottom;
	int arr[MAX];
public:
	Stack() {
		top = -1;
		bottom = -1;
	}
	int push(int v) {
		if (top >= MAX - 1) {
			cout << "Stack full" << endl;

		}
		else {
			top++;
			arr[top] = v;
			cout << v << "Pushed to stack" << endl;
		}
		
	}
	int pop() {

		if (top == bottom) {
			cout << "stack empty" << endl;
			return 0;
		}
		cout << arr[top] << "got deleted" << endl;
		top--;
	}

	bool isEmpty() {
		return to
	}
};