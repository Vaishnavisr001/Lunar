#include<iostream>
#include<cstring>
using namespace std;
class Movie1 {
private:
	string title;
	string genre;
	float rating;

public:
	void Movie(string t, string g, float r) {
		title = t;
		genre = g;
		rating = r;
	}
	void AcceptDetails() {
		cout << "TITLE:" << endl;
		cin >> title;
		cout << "GENRE:" << endl;
		cin >> genre;

		cout << "RATING(1-10):" << endl;
		cin >> rating;
	}
	void PrintStatus() {

		if (rating >= 8 && rating <= 10) {
			cout << "Hit Movie";
		}
		else if (rating >= 5 && rating <= 7.9) {
			cout << "Average Movie";
		}
		else {
			cout << "Flop Movie";
		}
	}
};
int main() {
	Movie1 m;
	m.AcceptDetails();
	m.PrintStatus();
	return 0;
}


