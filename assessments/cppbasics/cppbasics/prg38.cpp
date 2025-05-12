#include<iostream>
#include<cstring>
using namespace std;
int stringLength(char ch[], int index = 0) {
	if (ch[index] == '\0') {
		return 0;

	}
	return 1 + stringLength(ch, index + 1);
}
int main()
{
	char str[100];
	cin >> str;
	int length = stringLength(str);
	cout << length;
	return 0;
}