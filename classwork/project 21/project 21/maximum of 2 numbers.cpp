/*#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter two numbers";
	cin >> a >> b;
	int* ptr1 = &a;
	int* ptr2 = &b;
	if (*ptr1 > *ptr2)
	{
		cout << "The maximum number is:" << *ptr1 << endl;

	}
	else {
		cout << "The maximum number is:" << *ptr2 << endl;

	}
	return 0;

}*/
#include<iostream>
using namespace std;
int maxofnum(int*, int*);
int maxofnum(int* a, int* b) {
	int retValue = 0;
	retValue = (*a > *b) ? (*a) : (*b);
	return retValue;
}
int main()
{
	int v1, v2;
	cout << "Enter two number";
	cin >> v1, v2;
	cout << maxofnum(&v1, &v2) << endl;



}


