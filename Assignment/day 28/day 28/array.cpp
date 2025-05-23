/*prepare the class array with
1)get Biggest of array element
2)get Array sorted in Ascending order
3)get Array sorted in Descending order*/
#include<iostream>
#include<algorithm>
using namespace std;
class Array {
private:
	int arr[5];
	int size;
public:
	void getArray() {
		cout << "Enter the elements";
		cin >> size;
		for (int i = 0;i < size;i++) {
			cin >> arr[i];
		}
	}
	int LargestArray() {
		int max = arr[0];
		for (int i = 1;i < size;i++)
			if (arr[i] > max) {
				max = arr[i];

			}
		return max;
	}
	void descending() {
		sort(arr, arr + size);
		for (int i = 0;i < size;i++)
			cin >> arr[i];

	}
	/*for (int i = 0;i < n - 1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;*/
			}
		}
	}
	void Ascending()
	{
		for (int i = 0;i < 5;i++)
		{
			for (int j = 0;j < 4;j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}

		}
	}
	void display()
	{
		for (int i = 0;i < size;i++)
		{
			cout << arr[i];
		}
	}
};

int main()
{
	int arr[10];

	cout << "Enter size";
	int size;
	cin >> size;
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	Array ar(arr, size);
	ar.LargestArray();
	int maxx = ar.LargestArray();
	cout << maxx << endl;;
	ar.Ascending();
	ar.display();
	cout << endl;
	ar.descending();
	ar.display();
}