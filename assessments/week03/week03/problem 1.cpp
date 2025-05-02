// problem statement 1
#define MAX 100
#include<iostream>
#include<string>
using namespace std;
int position(char text[], char sub[]) {

	int i, j;
	for (i = 0;text[i] != '\0';i++) {
		int j = 0;
		
		while (text[i + j] != '\0' && sub[j] != '\0' && text[i + j] == sub[j]) {
			j++;
		}
		if (sub[j] == '\0') {
			return i;
		}
	}
	return -1;
}
int main()
{
	char text[MAX];
	cin.getline(text,MAX);
	char subarray1[] = "are";
	char subarray2[] = "is";
	int position1 = position(text, subarray1);
	int position2 = position(text, subarray2);
	int sum = position1 + position2;
	cout << "Sum = " << sum << endl;
	return 0;
	}
