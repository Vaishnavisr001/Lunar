#include<iostream>
using namespace std;
int main()
{
	int charge,mobilestatus ;
	cout << "Enter the charge percentage";
	cin >> charge;
	if (charge <= 0)
	{
		cout << "Plugin the phone";
	}
	cout << "You have enough charge ,Browse the phonee"<<endl;
	cout << "watch movie";
	
}
  else {
	cout << "Powering on the mobile" << endl;
	cout << "Mobile status(1/0)";
	mobileStatus = 1;
	cout << "Battery status(0-100)";

	cin >> charge;
	if (charge <= 0)
	{
		cout << "Plugin the phone";
	}
	cout << "You have enough charge ,Browse the phonee" << endl;
	cout << "watch movie";
	return 0;

}
}

