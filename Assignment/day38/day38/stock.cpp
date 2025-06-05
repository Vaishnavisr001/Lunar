#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<int> prices;
    string command;
    int value;

    while (cin >> command) {
        if (command == "ADD") {
            cin >> value;
            prices.insert(value);
        }
        else if (command == "REMOVE") {
            cin >> value;
            auto it = prices.find(value);
            if (it != prices.end()) {
                prices.erase(it);
                cout << value << " removed" << endl;
            }
        }
        else if (command == "MINMAX") {
            if (!prices.empty()) {
                cout << *prices.begin() << " " << *prices.rbegin() << endl;
            }
        }
    }
    return 0;
}
