//string length without using strlen()
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
	char ch[MAX] ;
	int length = 0;
	
	cin >> ch;
	while(ch[length]!='\0'){
		length++;

	}
		cout<< "The length is:" << length;
		return 0;
	}

