#include<iostream>
using namespace std;
float AreaOfSquare(int a) {
	float area = a * a;
	return area;
}
float AreaofRectangle(int l, int b) {
	float area1 = l * b;
	return area1;
}
float AreaofCiricle(int r) {
	float area2 = r * r;
	return area2;
}
float AreaofTriangle(int b, int h) {
	float area3 = 0.5 * (b * h);
	return area3;
}int MenuOFfunction() {
	
}
int runnable(int) {

}
int main(int argc, char* argv[])
{
	
	cout << argc << endl;
	if (argc > 1)
		runnable(atoi(argv[1]));
	else
	runnable(-1);
}
int runnable(int){
	int radius, length, breadth, height, side;
	int choice;
	if (choice == -1)
		choice = MenuOFfunction();
	cout <<"Enter the number of choice(1-4)" << endl;
	cin >> choice;
	switch (MenuOFfunction()) {
	case 1:
		cout << "Enter the side of square";
		cin >> side;
		cout << "The are of square:" << AreaOfSquare(side) << endl;
		break;
	case 2:
		cout << "Enter the length:";
		cin >> length;
		cout << "enter the breadth:";
		cin >> breadth;
		cout << "The area of the Rectangle:" << AreaofRectangle(length, breadth) << endl;
		break;
	case 3:
		cout << "Enter the radius:";
		cin >> radius;
		cout << "The area of the circle:" << AreaofCiricle(radius) << endl;
		break;
	case 4:
		cout << "Enter the breadth:";
		cin >> breadth;
		cout << "Enter the height:";
		cin >> height;
		cout << "Area of the Triangle:" << AreaofTriangle(breadth, height) << endl;
		break;
	default:
		cout << "NOT VALID";
	}
	return 0;




	}

	

