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
using namespace std;
int main()
{
	char str[100];
	cin.getline(str, 50);
	ltrim(str);
	cout << str;

}