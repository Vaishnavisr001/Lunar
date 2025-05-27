#include<iostream>
struct Node {
	int data;
	Node* next;
	Node(int val) {
		data = val;
		next = NULL;
	}
};
class LinkedList {
private:
	Node* head;
public:
	LinkedList() {
		head = NULL;
	}
	LinkedList() {
		Node* current = head;
		while (current != NULL) {
			Node* nextNode = current->next;
			delete current;
			current = nextNode;

		}
		head = NULL;

	}

};