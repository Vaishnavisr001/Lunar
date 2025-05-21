//bank
#include<iostream>
#include<cstring>
using namespace std;
class ATMAccount {
private:
	float balance;
	string accountHolder;
public:
	void AccountDetails(float b, string a) {
		balance = b;
		accountHolder = a;
	}
	void Deposit(float amount)
	{
		balance = balance + amount;
		cout << "DEPOSITED AMOUNT:" << balance << endl;
	}
	void Withdraw(float amount)
	{
		balance = balance - amount;
		cout << "BALANCE AMOUNT:" << balance << endl;
	}
	void CheckBalance() {
		cout << "BANK BALANCE IS:" << balance << endl;
	}
};
	int main()
	{
		ATMAccount ATM;
		ATM.AccountDetails(250000, "VAISHNAVI");
		float amount;
		int choice;
		cout << "Enter the choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Amount to DEPOSIT:";
			cin >> amount;
			ATM.Deposit(amount);
			break;
		case 2:
			cout << "withdraw amount:";
			cin >> amount;
			ATM.Withdraw(amount);
			break;
		case 3:
			cout << "BANK BALANCE:";
			ATM.CheckBalance();
			break;
		case 4:
			cout << "EXIT";
			break;

		default:
			cout << "INVALID CHOICE:";
			break;
		}
		return 0;
	}
	


		
	