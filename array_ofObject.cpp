#include<iostream>
using namespace std;
class BankAccount{
	static int count;
	private:
		string accountHolder;
		int accountNumber;
		double balance;
		string type;
		
	public:
		BankAccount(string holder, int number, double b, string ac_type){
			accountHolder = holder;
			accountNumber = number;
			balance = b;
			type = ac_type;
		}
		void getAccountDetails(){
			cout << "Count: "<<BankAccount::count<<endl;
			cout << "Holder: "<<accountHolder<<endl;
			cout << "Account Number: " << accountNumber<<endl;
			cout << "Balance: "<<balance<<endl;
			cout << "Account type: "<<type <<endl<<endl;
			BankAccount::count++;
		}
		
};
int BankAccount::count = 0;
int main(){
	
	BankAccount obj[]={
						BankAccount("abc",123456,5000,"current"),
						BankAccount("xyz",45612,2000,"saving"),
						BankAccount("pqr",789456,1000,"current"),
						BankAccount("lmn",102030,10000,"saving")
					};
	int i;
	for(i=0; i<3;i++){
		obj[i].getAccountDetails();
	
	}
	return 0;
}
