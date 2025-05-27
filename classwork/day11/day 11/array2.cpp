#include <iostream>
using namespace std;
int main()
{
	int arr[3] = { 101,222,333 }; //declaration with init array
	cout << "arr[0]=" << arr[0] << endl;
	cout << "arr[1]=" << arr[1] << endl;
	cout << "arr[2]=" << arr[2] << endl;
	cout << "arr[3]=" << arr[3] << endl;//garbage value as array out of bound
	for (int i = 0;i < 3;i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	//for updating the current array values
	arr[0] = 222;
	arr[1] = arr[0] * 10;//here the values of arr[0] and arr[1] will be updated others become unchnaged
	for (int i = 0;i < 3;i++)//In order to print the updated value we have to run the array again
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;

	}

	return 0;


}
