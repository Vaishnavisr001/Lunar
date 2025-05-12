#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (isalpha(ch)) {
		cout<<"Alphabet";
	}
	else {
		cout << "Not alphabet";
	}
	return 0;

}