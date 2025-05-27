//optimized code of linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int data;
	struct node* next;
}
NODE;
int main()
{
	NODE* nn = NULL, * head = NULL, * temp = NULL;//nn new node
	int ch = 1;
	while (ch)
	{
		nn = (NODE*)malloc(sizeof(NODE));//create nodes
		cout << "Value of Node:";
		cin >> nn->data;//initialize values
		nn->next = NULL;//initialize values
		if (head == NULL) {
			//empty list
			head = nn;//first node
			temp = nn;
		}
		else {

			head->next = nn;
			head = head->next;//make relationship
		}

		cout << "Do you want to add new node(0/1):";
		cin >> ch;

	}
	head = temp;//head is again pointed to BaseAddress of list
	while (head != NULL)
	{
		cout << head->data << "->";
		head = head->next;
	}
	cout << "NULL" << endl;

}
