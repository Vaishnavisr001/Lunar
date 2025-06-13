#include <iostream>
#include <stack>
#include <string>

using namespace std;

string isBalanced(const string& s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        else {
            if (st.empty()) return "NO";

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return "NO";
            }
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;
    cin.ignore();  

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        cout << isBalanced(s) << "\n";
    }

    return 0;
}
