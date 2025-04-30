#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	a = a + b;
	b = a - b; 
	a = a - b;
}
int main()
{
	int n, m;
	cout << "enter two numbers";
	cin >> n >> m;
	swap(n,m);
	cout << "Number after swapping is n=" << n << ",m=" << m << endl;
	return 0;
}