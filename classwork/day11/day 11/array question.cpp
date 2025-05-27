//make an array and check the given value present or not
#include <iostream>

using namespace std;
int main()
{
	int arr[10] = { 0 };
	for (int i = 0;i < 10;i++)
	{
		cin >> arr[i];

	}

	for (int i = 0;i < 10;i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;

	}


		int num;
		cout << "Enter the number";
		cin >> num;
		for (int i = 0;i < 10;i++)
		{
			if (arr[i] == num)
			{
				cout << arr[i] << "is present" << endl;

			}
			else {
				cout << "The number is not present"<<endl;
				
			}
		}

		return 0;
	}
	
	