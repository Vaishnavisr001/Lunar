#include<thread>
#include <iostream>
#include<mutex>
using namespace std;
typedef unsigned long long ull;
int amt = 0;
std::mutex m;
void addMoney(int x) {
	cout << "amt add=" << amt << endl;
	m.lock();
	amt += x;
	m.unlock();
}
void subMoney(int x) {
	cout << "amt sub=" << amt << endl;
	amt -= x;
}