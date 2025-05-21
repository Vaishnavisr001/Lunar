#include<iostream>
#include<cstring>
using namespace std;
class Student {
private:
	string name;
	int mark1, mark2, mark3;
public:
	void StudentDetails(string n, int m1, int m2,int m3) {
		name = n;
		mark1 = m1;
		mark2 = m2;
		mark3 = m3;
	}
	void CalculateAvg(int m1, int m2, int m3) {
		float average;
		average = m1 + m2 + m3 / 3;
	}
	void getGrade() {
		float avg;
		if (avg >= 90 && avg <= 100) {
			cout << "A grade" << endl;
		}
		else if (avg >= 69 && avg <= 89) {
			cout << "B grade" << endl;
		}
		else if (avg >= 49 && avg <= 68) {
			cout << "C grade" << endl;
		}
		else {
			cout << "Failed";
		}

		void display() {
			cout << "STUDENT:" << name << endl;
			cout << "AVERAGE:" << CalculateAvg() << endl;
			cout << "GRADE:" << getGrade() << endl;
		}
	};

	int main()
	{
		Student s;
		s.StudentDetails("VAISHNAVI", 10, 20, 30);
		s.CalculateAvg(10, 20, 30);
		s.getGrade();
		s.display();
		return 0;
	}








