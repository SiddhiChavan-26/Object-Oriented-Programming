//program for operator overloading for unary plus operator
#include<iostream>
using namespace std;
class Number{
	private:
		int value;
		
	public:
		//constructor
		Number(int v = 0):value(v){
			
		};
		
		Number operator -(){
			return Number(-value);
		}
		
		//display function
		void show(){
			cout << "Positive value is: " << value << endl;
		}
};
int main(){
	Number n1 (-10);
	Number n2 = -(n1);
	n2.show();
	
	
	return 0;
}
