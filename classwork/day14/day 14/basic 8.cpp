#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char ch[MAX];
	cout << "enter the string";
	cin >> ch;
	int count = 0;
	for (int i = 0;ch[i];i++)
	{
		if (ch[i] == 'A' || ch[i] == 'a' || ch[i] == 'E' || ch[i] == 'e' || ch[i] == 'I' || ch[i] == 'i' || ch[i] == 'O' || ch[i] == 'o' || ch[i] == 'U' || ch[i] == 'u')
		{
			count++;
		}
	}
		cout << "The number of vowels is:" << count;
		return 0;
	}

