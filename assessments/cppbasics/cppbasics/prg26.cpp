#include<iostream>
using namespace std;
int main()
{
	char s1[100], s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	int count = 0;
	if (strlen(s1)!=strlen(s2))
	{
		cout << "Not Anagram";
	}
	else 
	{
		for (int i = 0;i < strlen(s1);i++) {
			for (int j = 0;j < strlen(s2);j++) {
				if (s1[i] == s2[j]) {
					count++;


				}
			}
		}
	}
	//cout << count;
	
	if (count == strlen(s1)) {
		cout << "Anangram";
	}
	else {
		cout << "not anagram";
	}

	
	return 0;
}