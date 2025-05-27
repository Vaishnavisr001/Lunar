#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number";
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < i;j++) {//here j<i..means we doesnot want to gave space for 1st pattern.we need zero space then only the j loop became false and not able to execute
			cout << " ";
		}
			for (int j = 0;j < n-i;j++)//loops print star for each row
				cout << "* ";
		
		
		
		cout << endl;
	
	}
	
	for (int i = 1;i < n;i++) {
		for (int j = 0;j <=n-i-2;j++) {//-2 is for adjusting the spaces
			cout << " ";
		
		}
		for (int j = 0;j <=i ;j++)//loops print star for each row
			cout << "* ";



		cout << endl;

	}
	
	return 0;
}