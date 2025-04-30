#include<iostream>
using namespace std;
int smallestDigit(int number) {
	int smallest = 0;
	while (number > 0) {
		int digit = number % 10;
		if (digit < smallest)
		{
			smallest = digit;
		}
		number = number / 10;
	}
	return smallest;
}
int main()
{
	int num;
	cout << "enter the carved number";
	cin >> num;
	int smallest = smallestDigit(num);
	cout << "the small digit" << smallest << endl;
	return 0;

}
