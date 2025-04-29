/*function of different types:calling of functions
1.call by value
2.call by pointers
3.call by reference*/
#include<iostream>
using namespace std;
int updateadded(int, int);
int add(int, int);
int updateadded2(int *,int *);
using namespace std;
int main()
{
	int a = 10, b = 20;
	int res = add(a, b);
	cout << res << endl;
	res = updateadded(a, b);
	cout << res << endl;
	return 0;
}
int add(int v1, int v2)
{
	return v1 + v2;

}
int updateadded2(int*, int*)

{
	std::cout << v1 << "\t" << v2;
	*v1 = v1 * 2;
	*v2 = v2 / 3;
	std::cout << "v1=" << v1 << "\t v2=" << v2 << endl;

	return *v1 + *v2;
}
