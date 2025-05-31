//virtual class,upcasting
#include<iostream>
using namespace std;
class base {
public:
	void PrintB(){
		cout << "PrintB" << endl;
		virtual void disp()
		{
			cout << "B" << endl;

		}
		class D :public B {
		public:
			void PrintD(){
				cout << "PrintD" << endl;


			}
		};
	}
};
int main() {
	D d;
	d.printD();
	d.disp();
	B* ptr = new B;
	ptr->printB();
	ptr->disp();
	//upcasting
	//implicit and safe
	ptr = &d;
	ptr->printB();
	ptr->

}