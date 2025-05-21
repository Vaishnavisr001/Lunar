#include<iostream>
#include<cstring>
using namespace std;
class DigitalClock {
private:
	int hour;
	int minute;
	int seconds;

public:
	DigitalClock(int h, int m, int s) {
		hour = h;
		minute = m;
		seconds = s;
	}
	void tick() {
		seconds++;
		if (seconds == 60) {

			seconds = 0;
			minute++;
		}
		if (minute == 60) {
			minute = 0;
			hour++;
		}
		if (hour == 24) {
			hour = 0;
		}
	}
	void displayDetail() {
		cout << "HOUR:" << hour << endl;
		cout << "MINUTE:" << minute << endl;
		cout << "SECOND:" << seconds << endl;

	}
};


	int main() {
		DigitalClock d(10, 20, 30);


		d.tick();
		d.displayDetail();
		return 0;


	}

	 
