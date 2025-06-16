#include<iostream>
using namespace std;
int main() {

	auto greet = [](const string name) {
		cout << "hi" <<" "<<name << endl;
		return "Greeted";
		};
	cout << greet("bhima") << endl;
	return 0;
}

		