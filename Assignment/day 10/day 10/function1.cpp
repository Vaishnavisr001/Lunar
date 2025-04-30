#include<iostream>
using namespace std;
void tunnel(int energy)
{
	if (energy <= 0)
		return;
	cout << energy << " ";
	tunnel(energy / 2);

}
int main()
{
	int n;
	cout << "enter starting energy";
	cin >> n;
	cout << "energy at each gate";
	tunnel(n);
	cout << endl;
	return 0;
}