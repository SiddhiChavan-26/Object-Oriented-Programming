#include<iostream>
using namespace std;
int main(){
	int number ;
	cout << "Enter a integer: " << endl;
	cin >> number;
	
	if(number % 2 == 0){
		cout<< "The number is even number." <<endl;
	}else{
		cout << "The number is odd number." <<endl;
	}
	return 0;
}
