//Flight Question
#include<iostream>

#include <string>
using namespace std;
class Flight {
private:
	string flightNumber;
	int totalSeats;
	int bookedSeat;
public:
	Flight(string flightNo, int seats)
	{
		flightNumber = flightNo;
		totalSeats = seats;
		bookedSeat = 0;
	}
	bool bookSeats(int s) {
		if (bookedSeat + s <= totalSeats) {
			bookedSeat = bookedSeat + s;
			return true;

		}
		return false;

	}

	string ShowAvailability()
	{
		int  availableSeat = totalSeats - bookedSeat;
		return "Flight: "  + flightNumber + " " + " | " + " " + "Seats Available : " + to_string(availableSeat);
	}


};
int main()
{
	Flight f1("AI203",100);
	if (f1.bookSeats(30)) {
		cout << f1.ShowAvailability() << endl;
	}
	else{
		cout << "Booking Failed: Not enough seats.";

	}
	if (f1.bookSeats(80)) {
		cout << f1.ShowAvailability() << endl;
	}
	else {
		cout << "Booking Failed: Not enough seats.";

	}

	}

