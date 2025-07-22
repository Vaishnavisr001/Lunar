#include<iostream>
#include<fstream>
using namespace std;
class customer {
private:
	string MSISDN;
	string t_MSISDN;
	string Brand;
	string MMC;
	string MMT;
	string MOC;
	string MTC;
	string SMS_MO;
	string SMS_MT;
	string GPRS;

public:
	customer(string MSISDN,
		string t_MSISDN,
		string Brand,
		string MMC,
		string MMT,
		string MOC,
		string MTC,
		string SMS_MO,
		string SMS_MT,
		string GPRS) :MSISDN(MSISDN), t_MSISDN(t_MSISDN), Brand(Brand), MMC(MMC), MMT(MMT), SMS_MO(SMS_MO), SMS_MT(SMS_MT), GPRS(GPRS) {}
	void display() {
		cout << "customer" << endl;
		cout << MSISDN << endl;
		cout << t_MSISDN << endl;
		cout << Brand << endl;
		cout << MMC << endl;
		cout << MMT << endl;
		cout << SMS_MO << endl;
		cout << SMS_MT << endl;
		cout << GPRS << endl;
	}
};
int main() {


}

