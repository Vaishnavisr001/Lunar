#include<iostream>
using namespace std;
int main()
{
	char ch[100];


	cin.getline(ch, 100);
	int length = strlen(ch);
	
	bool isPalindrome = true;

	for (int i = 0;i < length / 2;i++) {
		if (ch[i] != ch[length - 1 - i]) {



			isPalindrome = false;
			break;

		}
	}
	if (isPalindrome) {
		cout << "Palindrome";
	}
	else {
		cout << "Not palindrome";
	}
	return 0;
}
