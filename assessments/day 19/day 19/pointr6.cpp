#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	int* temp = nullptr;
	int noofElem = 5;
	//allocate memory first and use it
	ptr = (int*)malloc(sizeof(int) * noofElem);
	//copy baseaddress to a temp pointer
	temp = ptr;
	for (int i = 0;i < noofElem;i++, ptr++) {
		cout << "enter the" << i + 1 << "value" << endl;
		cin >> *ptr;


	
	}
	ptr = temp;//reassign back to the baseaddressb to the pointer
	for (int i = 0;i < noofElem;i++, ptr++)
		cout << i + 1 << "value=" << *ptr << endl;
	return 0;

}
//