//print the sum of n natural number
#include<iostream>
using namespace std;
int SumofAdd(int num) {
	int sum = 0;
	for (int i = 1;i <= num;i++)
	{
		sum = sum + i;
	}
	return sum;
}
int main(int argc, char* argv[])
{
	int number;
	number=(atoi(argv[1]));
	cout << "Enter the number";
	cin >> number;
	int final = SumofAdd(number);
	cout << final << endl;
	return 0;
}

