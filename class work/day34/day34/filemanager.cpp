#include<iostream>
#include<fstream>
#include<cstring>
#include <string>
using namespace std;
int main() {
/*
	ofstream fOut("emp.txt");
	
	
	for (int i = 0;i < 10;i++) {
		fOut << (i +1) << endl;
	}*/
	string line;
	ifstream fIn("emp.txt");
	if (!fIn.is_open())
		cerr << "Error: opening the file" << endl;
	while (getline(fIn, line))
		cout << line << endl;
	fIn.close();
	
	return 0;

}