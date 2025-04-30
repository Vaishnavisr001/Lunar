#include<iostream>
using namespace std;
int countways(int n) {
	int count = 0;
	for(int a = 1;a <= n;++a){
		for (int b = a;b <= n;++b) {
			for(int c=b;c<=n;++c){
			int d = n - (a + b + c);
			if (d >= c && d >= 1) {
				count ++ ;
			}
		}

	}
	return count;

}
	int main()
	{
		int t;
		cout << "enter number";
		cin >> t;
		while (t--) {
			int N;
			cout << "enter number n";
			cin >> N;
			int res = countways(N);
			cout << res << endl;

		}
		return 0;
	}