#include<iostream>
using namespace std;
int highestPowerof(int n) {
	int power = 1;
	while (power * 2 <= n) {
		power *= 2;
	}
	return power;
}
int main()
{
	int energy;
	cout << "enter the energy";
	cin >> energy;
	if (energy < 1)
	{
		cout << "invalid" << endl;
		return 1;

	}
	int res = highestPowerof(energy);
	cout << "highest powerof 2 less than or equal" << energy << "is" << res << endl;
	return 0;
}