//loop for printing the pyramid
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number";
	cin >> n;
	int k = n*2-2;
	for (int i = 0;i < n;i++) {//loop for printing number of rows
		for (int j = 0;j <= k;j++)//loop for printing space(columns)

			cout << " ";
		k=k-1;
	

	
		for (int j = 0;j <= i;j++) {//loop for printing pattern
			cout << "* ";
		}
	
		cout << endl;

		
	}
	return 0;
}