#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char line[] = "This is a cpp programming class";
	char ch = 'g';
	unsigned long int BAL=
	char* res = strchr(line, ch);
	if (res != nullptr)
		cout << "\t" << res << endl;
	else {
		cout << "character not found" << endl;

	}
}