#include <iostream>
using namespace std;
int display();
int main()
{
BEGIN:
	while (true) {
		int ret = display();
		switch (ret)
		{
		case 1:
			cout << "Addition" << endl;
			break;
		case 2:
			cout << "Substraction" << endl;
			break;
		case 3:
			cout << "Multiplication" << endl;
			break;
		case 0:
			cout << "Exiting the application" << endl;
			goto END;
		default:
			cout << "Invalid option";

		}
	}
END:
	cout << "\n program ended successfully" << endl;
	goto BEGIN;
	return 0;
}
int display()
{
	int ch;
	cout << "press," << endl;
	cout << "1.Addition" << endl;
	cout << "2.substraction" << endl;
	cout << "3.Multipliction" << endl;
	cout << "0.Exit" << endl;
	cout << "choice:";
	cin >> ch;
	return ch;

}
