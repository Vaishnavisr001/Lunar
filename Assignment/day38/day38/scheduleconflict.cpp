#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<int> bookedSlots;

    
    string operations[] = { "BOOK", "BOOK", "BOOK", "CHECK", "BOOK" };
    int times[] = { 10, 14, 10, 11, 11 };
    int n = sizeof(times) / sizeof(times[0]);

    for (int i = 0; i < n; ++i) {
        string op = operations[i];
        int time = times[i];

        if (op == "BOOK") {
            if (bookedSlots.count(time)) {
                cout << "Already Booked" << endl;
            }
            else {
                bookedSlots.insert(time);
                cout << "Booked: " << time << endl;
            }
        }
        else if (op == "CHECK") {
            if (bookedSlots.count(time)) {
                cout << "Already Booked" << endl;
            }
            else {
                cout << "Free" << endl;
            }
        }
    }

    return 0;
}
