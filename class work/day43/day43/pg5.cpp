#include<iostream>
#include<stack>
#include<string>
using namespace std;
void visit(stack<string>& backstack, stack<string>forwardStack, string& current, const string& url) {
	backstack.push(current);
	current = url;
	while (!forwardStack.empty())forwardStack.pop();
	cout << "Visited:" << current << endl;
}
void goBack(stack<string>& backstack, stack<string>forwardStack, string& current)


}
