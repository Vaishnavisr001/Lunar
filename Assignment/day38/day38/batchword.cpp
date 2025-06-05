#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;


string toLower(const string& s) {
    string result = s;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

void normalizeCase(vector<string>& words) {
    for (string& word : words) {
        word = toLower(word);
    }
}


void sortAndRemoveDuplicates(vector<string>& words) {
    sort(words.begin(), words.end());
    auto last = unique(words.begin(), words.end());
    words.erase(last, words.end());
}

void printWords(const vector<string>& words) {

    for (size_t i = 0; i < words.size(); ++i) {
        cout << "\"" << words[i] << "\"";
        if (i != words.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<string> words = { "Apple", "banana", "apple", "Orange", "BANANA", "grape" };

    normalizeCase(words);
    sortAndRemoveDuplicates(words);
    printWords(words);

    return 0;
}
