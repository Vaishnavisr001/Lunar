#include<iostream>
using namespace std;
int CountVowels(char ch[]) {
	int count = 0;
	
	for (int i = 0;ch[i] !='\0';i++) {
		if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u') {
			count++;
		}
	}
		return count;
	
}
int main()
{
	char ch[100];
	cin.getline(ch,100);
	
	cout << CountVowels(ch);
	return 0;
}