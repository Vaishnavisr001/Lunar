#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node {
	int data;
	struct node* link;

};
class LinkedList {
private:
	Node* head;
public:
	LinkedList() {
		struct node* head = NULL;

	}
	void createNode(int value) {
		Node* newnode = (Node*)malloc(sizeof(Node));
		newnode->data = value;
		newnode->link = head;
		head = newnode;

	}
	void deleteFront() {
		if (head == NULL) {
			cout << "Empty linked list" << endl;

		}
		else {
			Node* ptr = head;
			head = head->link;
			delete(ptr);

			cout << "Deleted from front" << endl;
		}
	}
	void deleteEnd() {
		if (head == NULL) {
			cout << "Empty linked list" << endl;

		}
		else {
			if (head->link = NULL) {
				delete(head);
				head = NULL;
				cout << "Delete from END" << endl;

			}

		}
	}
	
	bool search(int val) {
		Node* ptr = head;
		int position = 0;
		while (ptr != NULL) {
			if (ptr->data == val) {
				cout << "found" << endl;
				return true;

			}
			ptr = ptr->link;
			position++;
		}
		cout << "not found" << endl;
	}

	void update(int old, int new) {
		Node* ptr = head;
		while (ptr != NULL) {
			if (ptr->data == old) {
				ptr->data = new;
				cout << "updated" << old << "to" << new << endl;
				return;
			}
			ptr = ptr->link;

		}
		cout << "not found" << endl;

	}

void display() {
	Node* ptr = head;
		while (head != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->link;
		}
		cout << endl;
	}

}
};
int main()
{
	LinkedList list;
	list.createNode(10);
	list.createNode(20);
	list.createNode(30);
	list.createNode(40);
	list.createNode(50);
	list.display();
	list.deleteFront();
	list.display();
	list.search(30);
	list.upsate(10, 80);
	list.display();
	return 0;
}



	