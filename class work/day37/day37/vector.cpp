#include<iostream>
#include<vector>
using namespace std;
class Student {
	int id;
	string name;
public:
	Student(int id,string name):id(id),name(name){}
	void display() {
		cout << "ID:" << id << endl;
		cout << "Name:" << name << endl;
	}
};
int main() {
	Student s[3] = { {103,"abcd1"},{102,"abcd2"},{103,"abcd3"} };
	Student s1 = { 104,"abc5" };
	Student s2 = { 105,"abcd5" };
	Student s2 = { 106,"abcd6" };
	
}