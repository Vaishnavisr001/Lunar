#include<iostream>
#include "Student.h"
using namespace std;
int main()
{
	Student S;

	
	float marks[] = { 100,300,800,900 };
	S.setName("bhima");
	S.setRollno(101);
	S.setMarks(marks);
	S.display();
	return 0;
}

