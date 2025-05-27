#include<iostream>
#include<string>
using namespace std;
class Employee {
private:
	int e_id;
	string e_name;
	string e_address;
	int e_phoneNum;
public:
	Employee(int i,string n,string a,int p) {
		e_id = i;
		e_name = n;
		e_address = a;
		e_phoneNum = p;

	}
	void setName(string e_name) {
		this->e_name = e_name;

	}
	void setAddress(string e_address) {
		this->e_address = e_address;
	}
	void setPhone(int e_phoneNum) {
		this->e_phoneNum = e_phoneNum;

	}
	void setID(int e_id) {
		this->e_id = e_id;

	}
	string getName() {
		return this->e_name;
	}
	string getAddress() {
		return this->e_address;

	}
	int getPhone() {
		return this->e_phoneNum;

	}
	int getId() {
		return this->e_id;
	}

};
int main() {
	Employee emp(101,"vaish","fshtratuy",78389849);
	emp.setID(201);
	emp.setAddress("HONEY DEW");
	emp.setName("VAISHNAVI");
	emp.setPhone(623964568);
	cout << "ID :" << emp.getId() << endl;
	cout << "ADDRESS:" << emp.getAddress() << endl;
	cout << "NAME:" << emp.getName() << endl;
	cout << "Phone NUMBER:" << emp.getPhone() << endl;
	return 0;


}