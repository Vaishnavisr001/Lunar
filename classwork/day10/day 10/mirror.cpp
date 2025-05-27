#include<iostream>
using namespace std;
void mirrorNumber(int n) {
	if (n == 0)
		return;
	cout << n % 10 << " ";
	mirrorNumber(n / 10);

}
int main()
{
	int n;
	cout << "enter the number";
		cin >> n;
	mirrorNumber(n);
	cout << endl;
	return 0;



}