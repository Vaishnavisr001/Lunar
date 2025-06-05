#include <iostream>
#include <set>
#include <string>

using namespace std;

class AutoSuggestSystem {
private:
    set<string> dictionary;

public:
    // Function to insert words into the dictionary
    void insert(const string& word) {
        dictionary.insert(word);
    }

    // Function to query suggestions based on a prefix
    void query(const string& prefix) {
        auto it = dictionary.lower_bound(prefix);
        while (it != dictionary.end() && it->substr(0, prefix.size()) == prefix) {
            cout << *it << endl;
            ++it;
        }
    }
};

int main() {
    AutoSuggestSystem autoSuggest;

    // Inserting words
    autoSuggest.insert("apple");
    autoSuggest.insert("application");
    autoSuggest.insert("banana");
    autoSuggest.insert("apply");
    autoSuggest.insert("ball");

    // Querying with prefix "app"
    cout << "Suggestions for 'app':" << endl;
    autoSuggest.query("app");

    return 0;
}
