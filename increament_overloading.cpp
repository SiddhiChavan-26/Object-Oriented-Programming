#include<iostream>
using namespace std;
class Count{
	private:
		int value;
	
	public:
		//constructor
		Count(int v=0):value(v){
			
		}
		
		//operatpor overloading
		Count operator ++(){
			return Count(++value);
		}
		
		//display function
		void show(){
			cout << "Count is: "<< value << endl;
		}
};
int main(){
	Count c1(5);
	c1.show();
	++c1;
	c1.show();
	
	return 0;
}
