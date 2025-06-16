#include<iostream>
#include<memory>
using namespace std;
class Rectangle {
private:
	int length;
	int breadth;
public:
	Rectangle(int l, int b) {
		length = l;
		breadth = b;
	}
	int area() {
		return length * breadth;
	}

};
int main() {
	unique_ptr<Rectangle>p1(new Rectangle(10, 50));
	cout << p1->area();

}