#include<iostream>
using namespace std;
int main()
{
	char ch[10];
	char str2[100];
	cin.getline(ch, 10);
	int length = strlen(ch);

	for (int i = 0;i <= length ;i++)
	{
		str2[i] = ch[length-i-1];
		
	}
	str2[length] = '\0';
	cout << str2;
	return 0;
}


