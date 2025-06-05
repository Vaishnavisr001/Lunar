#include <iostream>
#include <set>


void insertPrice(std::multiset<int>& prices, int price) {
    prices.insert(price);
}

int countAtLeast(const std::multiset<int>& prices, int query) {
    auto it = prices.lower_bound(query);
    return std::distance(it, prices.end());
}


bool eraseOne(std::multiset<int>& prices, int price) {
    auto it = prices.find(price);
    if (it != prices.end()) {
        prices.erase(it);
        return true;
    }
    return false; 
}

int main() {
    std::multiset<int> prices;

    insertPrice(prices, 100);
    insertPrice(prices, 150);
    insertPrice(prices, 200);
    insertPrice(prices, 150);
    insertPrice(prices, 250);

    
    int query = 150;
    int count = countAtLeast(prices, query);
    std::cout << "Number of items with price >= " << query << ": " << count << "\n";

    
    if (eraseOne(prices, 150)) {
        std::cout << "One instance of 150 erased.\n";
    }
    else {
        std::cout << "No instance of 150 found to erase.\n";
    }

    
    std::cout << "Updated prices: ";
    for (int price : prices) {
        std::cout << price << " ";
    }
    std::cout << "\n";

    return 0;
}
