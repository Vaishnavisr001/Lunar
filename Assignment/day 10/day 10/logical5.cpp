#include<iostream>
using namespace std;
bool isperfect(int num) {
	int sum = 0;
	for (int i = 1;i < num;i++) {
		if (num % i == 0) {
			sum = sum + i;
		}
	}
	return(sum == num);
}
int main()
{
	int n;
	cout << "enter army number";
	cin >> n;
	if (isperfect(n)) {
		cout << n << "is perfect army" << endl;
	}
	else{
		cout << n << "not a arny number" << endl;


	}
	return 0;

}