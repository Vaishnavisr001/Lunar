#include<iostream>
#include<cstring>
#include<cctype>
#define MAX 1024
using namespace std;

bool isVowel(char ch) {
	cout << ch << endl;
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main(){
	char s[MAX];
	cout << "Enter the string";
	cin.getline(s,MAX);
	int count = 0;
	for (int i = 0;s[i] != '\0';i++) {
		cout << s[i];
		if (isVowel(s[i])) {
			count++;
		}
	}
	cout << count;
	return 0;



}