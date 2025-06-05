#include <iostream>
#include <set>

using namespace std;

class Calendar {
private:
    set<int> bookedSlots;

public:
    // Attempt to book a time slot
    bool bookSlot(int hour) {
        if (bookedSlots.find(hour) != bookedSlots.end()) {
            // Conflict detected
            cout << "Conflict: " << hour << ":00 is already booked." << endl;
            return false;
        }
        else {
            // No conflict, book the slot
            bookedSlots.insert(hour);
            cout << "Booked: " << hour << ":00 successfully." << endl;
            return true;
        }
    }

    // Optional: print all booked slots
    void printSchedule() const {
        cout << "\nCurrent schedule:" << endl;
        for (int hour : bookedSlots) {
            cout << hour << ":00" << endl;
        }
    }
};

int main() {
    Calendar calendar;

    // Try booking time slots
    calendar.bookSlot(9);
    calendar.bookSlot(14);
    calendar.bookSlot(9);    // Should detect conflict
    calendar.bookSlot(16);
    calendar.bookSlot(14);   // Should detect conflict

    // Optional: show all booked hours
    calendar.printSchedule();

    return 0;
}
