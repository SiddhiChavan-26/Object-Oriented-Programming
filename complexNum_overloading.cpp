#include<iostream>
using namespace std;
class Complex{
	private:
		int real;
		int img;
		
	public:
		//constructor
		Complex(int r=0, int i=0):real(r), img(i){
			
		}
		
		//overloading function
		Complex operator+(const Complex& obj){
			Complex result;
        	result.real = real + obj.real;
        	result.img = img + obj.img;
        	return result;
		}
		
		void print() { 
			cout << real << " + i" << img << '\n'; 
		}
};
int main(){
	Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
    
	return 0;
}
