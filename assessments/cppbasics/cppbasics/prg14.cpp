#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	int fact = 1;
	if (num < 0) {
		cout << "Not fcatorial";
	}
	
	else {
		for (int i = 1;i <= num;i++) {
			fact = fact * i;


		}
	
		cout << fact;

	}
	return 0;

}