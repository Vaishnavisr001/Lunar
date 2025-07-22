#include <iostream>
#include <string>
using namespace std;

const int SIZE = 7;

class Node {
public:
    string key;
    int value;
    Node* next;

    Node(string k, int v) {
        key = k;
        value = v;
        next = nullptr;
    }
};
