#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char ch[100];
	int sum = 0;
	cin >> ch;
	int length = strlen(ch);
	for (int i = 0;i < length;i++) {
		if (ch[i] >= '0' && ch[i] <= '9') {

			sum = sum + ch[i]-'0';
		}


	}
	cout << sum;
	return 0;

}