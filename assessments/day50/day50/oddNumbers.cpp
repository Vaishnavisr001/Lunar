#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>oddNums;
	auto printodd = [](int n, vector<int>& nums) {
		for (int i = 0;i < n;i++) {
			if (i % 2 != 0) {
				cout << i << endl;
				nums.emplace_back(i);
			}
		}
		};
	printodd(10, oddNums);

		
}
	