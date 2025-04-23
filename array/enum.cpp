#include<iostream>
#include "enum.h"

using namespace std;
void enumHandling()
{
	enum Day { Monday = 1000, Tuesday, Wednesday = 2000, Thursday, Friday, Saturday, Sunday };
	Day today = Friday;
	cout << "Value of today: " << today << endl;
}