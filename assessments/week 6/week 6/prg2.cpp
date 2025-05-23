//hotel room
#include<iostream>

using namespace std;
class HotelRoom {
private:
	int RoomNumber;
	bool IsBooked;
	string Type;
public:
	HotelRoom(int num, string type) {
		RoomNumber = num;
		Type = type;
		IsBooked = false;


	}
	void bookRoom() {
		if (!IsBooked) {
			IsBooked = true;
			cout << "Room " << RoomNumber << " (" << Type << ") is now booked." << endl;

		}
		else {
			cout << "Room already booked." << endl;
		}
	}
	void showStatus() {
		if (IsBooked) {
			cout << "Room is already booked." << endl;
		}
		else {
			cout << "Room " << RoomNumber << "is available." << endl;
		}
	}
};
int main()
{
	HotelRoom h1(201, "AC");
	h1.bookRoom();
    h1.showStatus();
	
	return 0;

}