
//print odd and even in the set of array..first half should print odd and another part print even number
/*#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i, countodd, counteven;
	for (i = 0, countodd = 0;i < 10;i++)
	{
		if (i % 2 != 0)
		{
			a[countodd] = i;
			countodd++;

		}
	}


	for (i = 0, counteven = countodd;i < 10;i++)
		if (i % 2 == 0)
		{
			a[counteven] = i;
			counteven++;
		}

	for (i = 0;i < 10;i++)

		cout << a[i] << endl;

	return 0;
}
*/
//if already elements are given how to do
#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif
#include<iostream>
using namespace std;
int main() {
	int a[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countodd, counteven;
	constexpr int noElems = sizeof(a) / sizeof(a[0]);//constexpr evaluate the expression at compilation time
	int outputarr[noElems];
	cout << "No of elements present:" << noElems << endl;
	for (int i = 0, countodd = 0;i < noElems;i++)
	{
		if (a[i] % 2 != 0)
		{
			outputarr[countodd] = a[i];
			countodd++;
		}
	}


	for (int i = 0, countodd = counteven;i < noElems;i++)
	{
		if (a[i] % 2 == 0)
		{
			outputarr[counteven] = a[i];
			counteven++;
		}
		return 0;
	}

}
