#include<iostream>
using namespace std;
class BankAccount{
	public: 
		void balance(){
			cout << "Balance is: 2000 " <<endl;
		}
		
};
class Derived : public BankAccount{
	public: 
		void typeOfAccount(){
			cout << "Account type: Saving" << endl;
		}
};

int main(){
	BankAccount b1;
	b1.balance();
	Derived d1 ;
	d1.balance();
	d1.typeOfAccount();
	
	return 0;
}
