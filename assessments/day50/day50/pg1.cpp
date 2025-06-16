//lambda
#include<iostream>
using namespace std;
int main() {
	auto greet = []() {
		cout << "welcome" << endl;
	
		};
	greet();
	return 0;
}