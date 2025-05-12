#include<iostream>
using namespace std;
int main(){
	char ch[100];
    cin >> ch;

	int j = 0;
	for (int i = 0;ch[i] != '\0';i++)
	{
		if (isalpha(ch[i]))
		{
			ch[i] = ch[j];
			j++;

			
		}
	}
	ch[j] = '\0';
	cout << ch;
	return 0;
}
