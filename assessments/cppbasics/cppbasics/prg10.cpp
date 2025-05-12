#include<iostream>
using namespace std;
int main()
{
	char ch[100];
	cin.getline(ch, 100);
	char str[100];
	
	int j = 0;

	for (int i = 0;ch[i] != '\0';i++) {
		if (!(ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')) {
			str[j] = ch[i];
			j++;

		}


		str[j] = '\0';
	}
	cout <<str;
	return 0;
}

			


	



