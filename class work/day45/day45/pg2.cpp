#include <iostream>
#include <stack>
#include <string>

using namespace std;

class BrowserHistory {
    stack<string> backStack;
    stack<string> forwardStack;
    string current;

public:
    BrowserHistory(const string& homepage) : current(homepage) {
        cout << current << endl;  
    }

    void visit(const string& url) {
        backStack.push(current);
        current = url;

       
        while (!forwardStack.empty()) forwardStack.pop();

        cout << current << endl;
    }

    void back() {
        if (backStack.empty()) {
            cout << current << endl; 
        }
        forwardStack.push(current);
        current = backStack.top();
        backStack.pop();
        cout << current << endl;
    }

    void forward() {
        if (forwardStack.empty()) {
            cout << current << endl; 
            return;
        }
        backStack.push(current);
        current = forwardStack.top();
        forwardStack.pop();
        cout << current << endl;
    }
};

int main() {
    BrowserHistory browser("Home");

    string line;
    while (getline(cin, line)) {
        if (line.substr(0, 6) == "visit ") {
            string url = line.substr(6);
            browser.visit(url);
        }
        else if (line == "back") {
            browser.back();
        }
        else if (line == "forward") {
            browser.forward();
        }
        else {
            break; 
        }
    }

    return 0;
}
