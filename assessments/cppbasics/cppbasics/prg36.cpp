#include<iostream>
#include<cstring>
using namespace std;
void reverse(char ch[], int index) {
	int length = strlen(ch);
	if (index == length) {
		return;

	}
	reverse(ch, index + 1);
	cout << ch[index];
}
int main() {
	char ch[100];
	cin >> ch;
	reverse(ch, 0);
	cout << endl;
	return 0;

}