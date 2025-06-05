#include<iostream>
#include<set>
#include<string>
using namespace std;
class visitorTracker {
protected:
	set<int>visitors;
public:
	void visit(int user_id) {
		visitors.insert(user_id);
	}
	void unique() {
		cout << visitors.size() << endl;

	}
	void top() {
		for (int id : visitors) {
			cout << id << " ";

		}
		cout << endl;
	}
};
int main()
{
	visitorTracker T;
	int n;
	string command;
	cin >> n;
	for (int i = 0;i < n;++i) {
		getline(cin, command);
		if (command.find("VISIT") == 0) {
			int user_id = stoi(command.substr(6));
			T.visit(user_id);

		}
		else if (command == "Unique") {
			T.unique();
		}
		else if (command == "TOP") {
			T.top();
		}
	}
	return 0;

	}
