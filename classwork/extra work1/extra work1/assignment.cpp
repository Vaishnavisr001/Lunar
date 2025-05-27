#include<iostream>
#define MAX 100
using namespace std;
int main() {
	char temp[name];
	cin.getline(name, 100);
	char str2[] = "aeiouAEIOU";
	int i = 0;
	int j = 0;
	
	while (name[i]) {
		if (!strchr(str2, name[i])) {
			temp[j++] = name[i];
		}
		j++;
	}
	temp[j] = '\0';
	cout << temp << endl;
	return 0;
}