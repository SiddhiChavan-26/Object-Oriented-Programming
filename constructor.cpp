#include<iostream>
using namespace std;
class BankAccount{
	private:
			int account_number;
			float balance;
	
	public:
			// Default constructor 
			BankAccount(){
				account_number = 54612378;
				balance = 5000;
				cout<<"Default constructor is called."<<endl;
			}
			
			//constructor with parameter
			BankAccount(int acnumber){
				account_number = acnumber;
				balance = 10000;
				cout<<"Constructor with 1 parameter is called."<<endl;
			}
			
			//function to get account details
			void getAccountInfo(){
				cout<<"Account number: "<< account_number <<endl;
				cout<<"Balance: " << balance <<endl;
			}
			
			//function to get account balance
			void getBalance(){
				cout<<"Balance: "<< balance <<endl;
			}
			
			//function to deposit amount
			void deposit(int amount){
				balance += amount;
				cout<<"Amount deposited successfully!!"<<endl;
			}
			
			//function to withdraw amount
			void withdraw(int amt){
				balance -= amt;
				cout<<"Balance remaining after withdraw: "<<balance<<endl;
			}
			
			//get amount from user
			float setAmount(){
				int amount; 
				cout<<"Enter amount: "<<endl;
				cin>>amount;
				return amount;
			}
			
			//Destructor
			~BankAccount(){
				cout<<"Destructor is called!!"<<endl;
			}
};
int main(){
	BankAccount a1;
	BankAccount a2(123456);
	int number;
	cout<<"1.Check account balance."<<endl;
	cout<<"2.Deposit amount."<<endl;
	cout<<"3.Withdraw amount."<<endl;
	cout<<"4.Get account details" <<endl;
	cout<<"5.Exit."<<endl;
	cout<<"Enter number: "<<endl;
	cin >> number;
	

	switch(number){
			case 1: {
				a1.getBalance();
				break;
			}
			case 2:{
				int cash = a1.setAmount();
				a1.deposit(cash);
				break;
			}
			case 3:{
				int cash = a1.setAmount();
				a1.withdraw(cash);
				break;
			}
			case 4: {
				a1.getAccountInfo();
				break;
			}
			case 5: {
				cout<<"Exiting!!" <<endl;
				break;
			}
			default:
				cout<<"Please enter appropriate number!!"<<endl;
	}
	
	cout<<endl<<"Details about account 2: "<<endl;
	a2.getAccountInfo();
	return 0;
}
