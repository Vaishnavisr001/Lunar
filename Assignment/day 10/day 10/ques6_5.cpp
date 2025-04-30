#include<iostream>
using namespace std;
void convert(int hours)
{
	int min = hours * 60;
	int seconds = min * 60;
	cout << "Minutes" << min << endl;
	cout << "seconds" << seconds << endl;


}
int main()
{
	int hrs;
	cout << "enter the hours";
	cin >> hrs;
	convert(hrs);
	return 0;

}