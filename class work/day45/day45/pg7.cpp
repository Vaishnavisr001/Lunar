#include<iostream>
#include<thread>
using namespace std;
int n = 10;
void PrintNumber(bool isEven) {

	for (int i = 1;i <= 10;i++) {
		if ((i % 2 == 0) == isEven) {
			cout << (isEven ? "Even" : "Odd")  <<i<< endl;
		}
	}
}
		
int main() {

	std::thread t1(PrintNumber, true);

	std::thread t2(PrintNumber, false);
	t1.join();
	t2.join();
}