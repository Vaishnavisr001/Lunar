#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char str[], int start, int end) {
	if (start >= end) {
		return true;

	}
	if (str[start] != str[end]) {
		return false;
	}
	return isPalindrome(str, start + 1, end - 1);

}
int main()
{
	char str[100];
	cin >> str;
	int length = strlen(str);
	if (isPalindrome(str, 0, length - 1)) {
		cout << "palindrome";
	}
	else {
		cout << "Not palindrome" << endl;
	}
	return 0;
}