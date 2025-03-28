#include<iostream>
#include<string.h>
using namespace std;

class Bank{
	private:
		int account_number;
		float balance;
			
	public:
		//constructor
		Bank(int n= 123456, int b= 5000):account_number(n),balance(b){

		};
		
		//function to get balance of account
		int get_balance(){
			return balance;
		}
		
		//function overloading
		void deposit(int amount){
			balance += amount;
			cout << "Depositing "<< amount<<"Rs in cash"<<endl;
		}
		
		void deposit(double amt){
			balance += amt;
			cout << "Depositing "<< amt<<"Rs via digital payment"<< endl; 
		}
		
		void deposit(string id, int rupees){
			balance += rupees;
			cout << "Depositing "<< rupees<<"Rs using UPI("<<id<<")"<<endl<<endl;
		}
		
};
//class Account
class Account{
	private:
		int ac_number;
		float balance;
		
	public:
		//constructor
		Account(int num = 10203040, int bal= 3000):ac_number(num), balance(bal){

		};
		
		//function to get balance
		int getBalance(){
			return balance;	
		}
		
		//operator overloading for fund transfer
		Account operator +(const int amount){
			return Account(ac_number, balance + amount);
		}
		
		//operator overloading for withdrawal
		Account operator -(const int amount){
			if (balance >= amount)
				return Account(ac_number, balance - amount);
			else{
				cout << "Insufficient funds!" << endl;
				return *this;
			}
		}
		
		//function to display account details
		void display(){
			cout << "Account number- " << ac_number << " has a Balance: " << balance << endl;
		}
};

int main(){
	//creating objects of class Bank
	Bank b1, b2;
	Bank b3(102030, 2000);
	
	b1.deposit(3000);
	b2.deposit(2500.50);
	b3.deposit("gpay@upi", 3000);
	
	
	Account a1(1234, 10000);
	Account a2(4567, 5000);
	
	a1.display();
	a2.display();
	
	cout << "\nTransferring 3000 from Account 1 to Account 2..." << endl;
	a1 = a1 - 3000;
	a2 = a2 + 3000;
	
	a1.display();
	a2.display();
	
	cout << "\nWithdrawing 2000 from Account 1..." << endl;
	a1 = a1 - 2000;
	a1.display();
	
	return 0;
}
