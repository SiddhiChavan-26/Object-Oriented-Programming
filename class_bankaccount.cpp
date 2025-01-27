#include<iostream>
using namespace std;
class BankAccount{
	private:
			int account_number;
			float balance=5000;
			string type_of_account;
	
	public:
			string name_of_accountholder;
			void getBalance(){
				cout<<"Balance: "<< balance <<endl;
			}
			void deposit(int amount){
				balance += amount;
				cout<<"Amount deposited successfully!!"<<endl;
			}
			void withdraw(int amt){
				balance -= amt;
				cout<<"Balance remaining after withdraw: "<<balance<<endl;
			}
			float setAmount(){
				int amount; 
				cout<<"Enter amount: "<<endl;
				cin>>amount;
				return amount;
			}
};
int main(){
	BankAccount a1;
	int number;
	cout<<"1.Check account balance."<<endl;
	cout<<"2.Deposit amount."<<endl;
	cout<<"3.Withdraw amount."<<endl;
	cout<<"4,Exit."<<endl;
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
				cout<<"Exiting!!" <<endl;
				break;
			}
			default:
				cout<<"Please enter appropriate number!!"<<endl;
	}	
	return 0;
}
