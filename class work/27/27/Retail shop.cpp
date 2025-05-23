#include<iostream>
#include<cstring>
#define MAX 5
using namespace std;
class RetailShop {
private:
	string itemName[5];
	int quantity[5];
	float price[5];
	int itemcount = 0;
public:
	void addItem() {
		for (int i = 0;i < MAX ; i++) {
			if (itemcount <= 5) {
				cout << "Enter the item";
				cin >> itemName[itemcount];
				cout << "Enter the quantity";
				cin >> quantity[itemcount];
				cout << "Enter the price";
				cin >> price[itemcount];
				itemcount++;
			}
			else {
				cout << "ITEM FULL";
			}
		}
	}
	int SearchItem(){
		for (int i = 0;i < 10;i++) {
			if()
		}

	}
};
