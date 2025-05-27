#include<iostream>
using namespace std;
int main() {
	
	int n,i;
	cout << "Enter the number";
	cin >> n;
	int num = 1;
	for ( i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			cout << num++<<" ";
			

		}
		cout << endl;
	}
	return 0;

}