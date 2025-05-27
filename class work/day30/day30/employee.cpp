#include<iostream>
#include<stdlib.h>
#define max 1000
using namespace std;


class Employee {
private:
	int id;
	string name;
	float salary;
public:
	Employee(int i, string n, float s) {
		id = i;
		name = n;
		salary = s;

	}
	class Node {
	public:
		Employee* emp;
		Node* next;
		Node(Employee* emp) {
			emp = emp;
			next = NULL;
		}

		class LinkedList {
		private:
			Node* head;
		public:
			LinkedList() {

				head = nullptr;
			}
		void AddEmployee(int id, string name, float salary) {
			if (salary <= 0 || name.empty() || name.length() > 50) {
				cout << "Invalid Input";
				return;

			}
			Node* temp = head;
			while (temp != NULL) {
				if (temp->emp->id == id) {
					cout << "Id already present";
					return;

				}
				temp = temp->next;
			}
			Employee *nn
		

		
	