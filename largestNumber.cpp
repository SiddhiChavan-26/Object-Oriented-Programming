#include<iostream>
int largest(int a, int b, int c){
	if(a >= b && a >= c)
		return a;
	else if(b >= c)
		return b;
	else
		return c;
}
int main(){
	int num1,num2, num3;
	std::cout << "Enter Three numbers: ";
	std::cin >> num1 >> num2 >> num3;
	
	std::cout<<"Largest number is: " << largest(num1, num2, num3);
	return 0;
	
}
