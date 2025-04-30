#include<iostream>
using namespace std;
bool triangle(int angle1, int angle2, int angle3) {
	int sum = angle1 + angle2 + angle3;
	return(sum == 180);
}
int main() {
	int a, b, c;
	cout << "enter 3 angles";
	cin >> a >> b >> c;
	if (triangle(a, b, c)) {
		cout << "triangle" << endl;
	}
	else{
		cout << "not triangle" << endl;

	}
	return 0;
}