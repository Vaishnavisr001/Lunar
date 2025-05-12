//find the even numbers between start range and end range
#include<iostream>
using namespace std;
int main()
{
	int  start_range, end_range;
	cout << "Enter the start range";
	cin >> start_range;
	cout << "Enter the end_range";
	cin >> end_range;
	for(int i=start_range;i<=end_range;i++)
		if (i % 2 == 0) {
			cout << i << endl;

		}
	return 0;
}