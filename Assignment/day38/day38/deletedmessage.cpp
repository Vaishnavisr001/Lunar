#include <iostream>
#include <forward_list>
#include <string>

using namespace std;

int main() {
    forward_list<string> messages = {
        "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse"
    };

    auto prev = messages.before_begin();
    auto curr = messages.begin();

    while (curr != messages.end()) {
        if (curr->find("DELETED:") == 0) {
            curr = messages.erase_after(prev);
        }
        else {
            prev = curr;
            ++curr;
        }
    }

    for (const auto& msg : messages) {
        cout << msg << "\n";
    }

    return 0;
}
