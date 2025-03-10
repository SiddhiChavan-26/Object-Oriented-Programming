//program for operator overloading for unary minus operator
#include<iostream>
using namespace std;
class Number{
	private:
		int value;
		
	public:
		//constructor
		Number(int v =0):value(v){
			
		}
		
		//operator overloading
		Number operator -(){
			return Number(-value);
		}
		
		//display function
		void show(){
			cout << "Negative value is: " << value << endl;
		}
};

int main(){
	Number n1(7);
	Number n2 = -n1;
	n2.show();
	
	return 0;
}
