#include<iostream>
using namespace std;
class BankAccount{
	private:
			int ac_number;
			float balance;
	
	public:
			//default constructor 
			BankAccount(){
				ac_number = 123456;
				balance = 0;
				cout<<"Default constructor is called."<<endl;
			}
			
			//constructor with parameter
			BankAccount(int b){
				ac_number = 102030;
				balance = b;
				cout<<"Constructor with 1 parameter is called."<<endl;
			}
			
			//constructor with 2 parameters
			BankAccount(int n, int b){
				ac_number = n;
				balance = b;
				cout<<"Constructor with 2 parameter is called."<<endl;
			}
			BankAccount(const BankAccount& obj){
				cout<<"Copy constructor is called." << endl;
				ac_number = obj.ac_number;
				balance = obj.balance;
			}
			
			void getBalance(){
				cout<<"Balance: "<< balance <<endl<<endl;
			}
			
			void deposit(){
				int amount;
				cout<<"Enter amount to deposit: "<<endl;
				cin >> amount;
				balance += amount;
				cout<<amount<<" rupees deposited successfully!!"<<endl;
				cout<<"Balance: "<< balance <<endl;
			}
			
			void withdraw(){
				int amount;
				cout<<"Enter amount to withdraw: "<<endl;
				cin >> amount;
				balance -= amount;
				cout<<"Balance remaining after withdraw: "<<balance<<endl;
			}
			
			void getAccountInfo(){
				cout << "Account number : "<<ac_number<<endl;
				cout << "Balance: "<< balance << endl<<endl;
			}
			
};
int main(){
	
	BankAccount b1;
	b1.getAccountInfo();
	b1.deposit();
	b1.withdraw();
	b1.getBalance();  
	
	BankAccount b2(1000);
	b2.getAccountInfo();
	b2.deposit();
	b2.withdraw();
	b2.getBalance();
	
	BankAccount b3 = b2;
	b3.getAccountInfo();
	b3.getBalance();

	BankAccount b4 = b1;
	b4.getAccountInfo();
	b4.getBalance();	
	
	BankAccount b5(100200, 15000);
	b5.getAccountInfo();
	
	return 0;
}
