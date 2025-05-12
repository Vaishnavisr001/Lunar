#include<iostream>
void ltrim(char str[])
{
	int start = 0;
	while (str[start] == ' ' || str[start] == '\t')
		start++;
	if (start != 0)
	{
		int i = 0;
		while (str[start])
		{
			str[i++] = str[start++];

		}
		str[i] = '\0';
	}
}
void rtrim(char str[])
{
	int len = strlen(str);
	while (str[len - 1] == ' ' || str[len - 1] == '\t')
		len--;
	str[len] = '\0';
}
void trim(char str[]) {
	rtrim(str);
	ltrim(str);
}
using namespace std;
int main()
{
	char str[100];
	cin.getline(str, 50);
	ltrim(str);
	cout << str;
	return 0;
}