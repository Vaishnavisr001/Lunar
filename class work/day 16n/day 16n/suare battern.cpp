#include<iostream>
using namespace std;
int main()
{
	int n;
	int columns[] = { 3,3,3,3,3,3,3,3,3,3};
	int totalcolums=10;
	int Maxrows = 6;
	for (int row = 0;row < Maxrows;row++) {
		for (int col = 0;col < totalcolums;col++) {
			if (columns[col] >= Maxrows - row)
			
				cout << "*";
			
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;

}
