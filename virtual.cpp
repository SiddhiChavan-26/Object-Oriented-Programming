#include<iostream>
using namespace std;
class Base{
	public:
		virtual void show(){
			cout << "Function of base class" << endl<<endl;
		}
};

class Derived: public Base{
	public:
		void show(){
			cout << "Function of Derived class" << endl<< endl;
		}
};
int main(){
//	Base b1;
//	b1.show();
//	
//	Derived d1;
//	d1.show();
//	d1.show();
	Base b2;
	b2.show();
	Base* b1;
	Derived d1;
	b1 = &d1;
	b1->show();
	d1.show();

	return 0;
}
