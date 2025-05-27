//check the give character is consonant or vowel
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Enter the character:";
	cin >> ch;
	if (ch == 'A' || ch == 'a' || ch  == 'E' || ch == 'e' || ch  == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch  == 'U' || ch == 'u')
	{
		cout << "This is vowels";
	}
	else {
		cout << "This is a consonant";
	}
	return 0;
}