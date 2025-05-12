#include<iostream>
using namespace std;
int main()
{
		int a[] = { 10,20,10,3,4,5 };
		int n = sizeof(a) / sizeof(a[0]);
		int i, j, k;
		for (int i = 0;i < n;i++) {
			for (int j = i + 1;j < n;)
			{
				//shifting of elements to the left side
				if (a[i] == a[j]) {
					for (k = j;k < n - 1;k++)
						a[k] = a[k + 1];
					n--;//reduce the size of dup;icate element found after shifting
				}
				else
					j++; //no duplicate item present in the next element
			}
		}
		for (int i = 0;i < n;i++)
			cout << a[i] << " ";
		return 0;

	}
