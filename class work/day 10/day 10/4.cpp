//dragon
#include<iostream>
using namespace std;
void Dragon(int n) {
	for (int i = 0;i <= n;i++)
	{
		if (i % 3 == 0) {
			continue;
		}
		cout << i << " ";
	}
}
int main()
{
	int n;
	cout << "enter the number";
	cin >> n;
	Dragon(n);
	cout << endl;
	return 0;



}