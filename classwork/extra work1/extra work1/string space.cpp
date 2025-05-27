//to remove space from string
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char str[MAX];
	cout << "enter the string";
	cin.getline(str, MAX);
	int j = 0;

	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] != ' ') {
			str[j] = str[i];

			j++;
		}
	}
		str[j] = '\0';
		cout << str << endl;
		return 0;
	}


