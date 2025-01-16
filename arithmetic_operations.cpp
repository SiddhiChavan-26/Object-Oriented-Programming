//program for basic arithmetic operations
#include<iostream>
int sum(int a, int b){
	int s = a + b;
	return s;
}
int subtract(int c, int d){
	int sub = c-d;
	return sub;
}
int multiply(int x, int y){
	int multi = x*y;
	return multi;
}
int divide(int p, int q){
	float div = p/q;
	return div;
}
int main(){
	int num1,num2;
	std::cout<<"Enter first number:";
	std::cin>>num1;
	std::cout<<"\nEnter second number:";
	std::cin>>num2;
	
	std::cout << "\nThe sum is: " << sum(num1, num2);
	std::cout << "\nThe subtraction is: " << subtract(num1, num2);
	std::cout << "\nThe multiplication is: " << multiply(num1, num2);
	std::cout << "\nThe division is : " << divide(num1, num2);
	return 0;

}
