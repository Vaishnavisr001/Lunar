#include<iostream>
using namespace std;
int main() {
	char ch[100];
	int j = 0;
	cin.getline(ch, 100);
	for (int i = 0;ch[i] != '\0';i++)
	{
		if (ch[i] != ' ') {
			ch[j] = ch[i];
			j++;
		}
	}
	ch[j] = '\0';
	cout << ch;
	return 0;
}




