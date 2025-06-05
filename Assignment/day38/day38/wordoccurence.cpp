#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string text = "hello world hello code hello learn world code";

    multiset<string> words;

    size_t start = 0;
    while (true) {
        size_t end = text.find(' ', start);

        
        if (end > text.length()) {
            
            string word = text.substr(start);
            words.insert(word);
            break;
        }
        else {
            string word = text.substr(start, end - start);
            words.insert(word);
            start = end + 1;
        }
    }

 
    cout << "Sorted Words:\n";
    for (const auto& w : words) {
        cout << w << " ";
    }
    cout << endl;

    
    cout << "Count of 'hello': " << words.count("hello") << endl;
    cout << "Count of 'code': " << words.count("code") << endl;

    return 0;
}
