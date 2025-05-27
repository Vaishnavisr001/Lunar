
#pragma diag_suppress 28
#ifdef __INTELLISENSE__
#include<iostream>
#endif
using namespace std;
int main()
{
	int m1, n1, m2, n2;
	cout << "enter the rows and columns of the 1st matrix";
	cin >> m1 >> n1;
	cout << "enter the rows and columns of the second matrix";
	cin >> m2 >> n2;
	if (n1 != m2) {
		cout << "multiplication not possible";
		return 0;

	}
	int A[m1][n1], B[m2][n2], C[m1][n2] ;
	cout << "enter the elements of matrix A" << endl;
	for (int i = 0;i < m1;++i)
		for (int j = 0;j < n1;++j)
			cin >> A[i][j];
	cout << "Enter the elements of B" << endl;
	for (int i = 0;i < m2;++i)
		for (int j = 0;j < n2;++j)
			cin >> B[i][j];
	cout << "Enter the elements for matrix c" << endl;
	for (int i = 0;i < m1;++i)
		for (int j = 0;j < n2;++j)
			cin >> C[i][j];
	for (int i = 0;i < m1;++i) {
		for (int j = 0;j < n2;++j) {
			for (int k = 0;k < n1;++k) {
				C[i][j] += A[i][k] * B[k][j];

			}

		}
	}
	cout << "The result of matrix C" << endl;
		for (int i = 0;i < m1;++i) {
			for (int j = 0;j < n2;++j) {
				cout << C[i][j] << " ";
			}
			cout << endl;
		}
	return 0;
}
