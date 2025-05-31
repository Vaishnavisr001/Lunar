#include<iostream>
using namespace std;
int main()
{
	string err = "Bhima";
	string dbyZerOErr = "Divide by zero occurred";
	string nullPtrErr = "Memory allocation failed";
	char* ptr = nullptr;

	int n1 = 10, n2 = 0;
	try {
		/*if (n2 == 0)
			throw dbyZerOErr;*/
		if (ptr == nullptr)
			throw nullPtrErr;

	}
	catch (int e) {
		cout << "Caught an exception:" << e << endl;

	}
	catch (const string e) {
		cout << "Caught an exception:" << e << endl;
	}
	catch (bad_alloc& e)
	{
		cout << "Catch" << e.what() << endl;

	}
	
	return 0;

}