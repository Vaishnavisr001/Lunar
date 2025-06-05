#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	set<string> banned = { "bad","evil","vulgar" };
	string text = "This is a bad example with evil words";
	string result;
	size_t start = 0, end = 0;
	while (true) {
		end = text.find(' ', start);
		string word;
		if (end == string::npos) {
			word = text.substr(start, end - start);
		}
		if (banned.find(word) == banned.end()) {
			result = result + word + " ";
		}
		if (end == string::npos)break;
		start = end + 1;
	}
	if (!result.empty()) {
		result.pop_back();
	}
	cout << "Filtered" << result << endl;
	return 0;

}