#include<iostream>

void rtrim(char str[])
{
	int len = strlen(str);
	while (str[len - 1] == ' ' || str[len - 1] == '\t')
		len--;
	str[len] = '\0';
}
using namespace std;
int main()
{
	char str[100];
	cin.getline(str, 50);
	rtrim(str);
	cout << str;
	
}