#include<iostream>
using namespace std;
int main(){
	int num1 = 10 ,num2 = 20;
	
	cout << "Before swapping : " << endl;
	cout << " num1: " << num1 << " num2: " << num2 <<endl;
	
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "After swapping : " << endl;
	cout << " num1: " << num1 << " num2: " << num2;
	  return 0;
}
