#include <iostream>
using namespace std;
int main()
{
	/* int amtInHand;
	cout << "Enter the amount in hand:";
	cin >> amtInHand;
	if (amtInHand >= 10 && amtInHand <= 50)
	{
		cout << "I can order snacks" << endl;

	}
	else if (amtInHand > 50 && amtInHand <= 100)
	{
		cout << "I can order roti" << endl;

	}
	else if (amtInHand > 100 && amtInHand < 500)
	{
		cout << "I can order it for complete meals" << endl;

	}
	else
	{
		cout << "I can order aything" << endl;
	}
*/
	string genre;
	cout << "Enter the genre";
	cin >> genre;
	if (genre[0] >= 48 && genre[0] <= 57) {
		cout << "Genre name cant start with numeric character" << endl;
		return 0;
	}
	
	if (genre.compare("Action") == 0) 
	{
		cout << "Selected game is Action" << endl;

	}
	else if (genre.compare("Thriller") == 0)
	{
		cout << "selected game is Thriller" << endl;

	}
	else if (genre.compare("comedy") == 0)
	{
		cout << "selected game iS COMEdy" << endl;
	}
	else {
		cout << "Genre is not presented" << endl;
	}
	cout << "End of the program";
	return 0;
}