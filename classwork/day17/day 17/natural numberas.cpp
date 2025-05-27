//print all the natural numbers from 1 to 10 without using loops or goto and having only not more than 6 line of code excluding includes and declaration and also not use user defined recursive function
#include<iostream>
using namespace std;
int main()
{
	static int n = 1;
	if (n ==11)
		return 0;
	cout << n++ << endl;
	main();
}