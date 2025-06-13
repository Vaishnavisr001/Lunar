#include<iostream>
#include<thread>
#include<mutex>
#include<string>
using namespace std;

class counter {
	int x;
	mutex m;
public:
	counter():x(0){}
	void increement(const string tname) {
		for (int i = 0;i < 5;i++) {
			lock_guard<mutex>lock(m);//once the for loop is done it will do unlock..if once its looses the scope it will unlock
			//m.lock();
			x += 2;
			cout << "\n" << tname << "increement x by" << x << endl;
			//m.unlock();

		}
	}
	int getX()
	{
		return x;
	}

};
int main() {
	counter c;
	thread t1(&counter::increement, &c, "Thread 1");
	thread t2(&counter::increement, &c, "Thread 2");

}
