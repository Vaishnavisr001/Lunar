#include<iostream>
#define MAX 100
using namespace std;
void reverseline(char str[], int start, int end) {
	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		start ++;
		end--;

	}
}

int main() {
	char str[MAX];
	cout << "Enter the line::";
	cin.getline(str, MAX);

	int i = 0, start1 = 0;
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			reverseline(str, start1, i - 1);
			start1 = i + 1;
		}
		i++;
	}
	reverseline(str, start1, i - 1);
	cout << "The reversed line" << str;
	return 0;
}
