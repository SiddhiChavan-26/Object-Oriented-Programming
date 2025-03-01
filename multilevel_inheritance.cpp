#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void get_aValue(){
			cout << "Enter value of a : "<<endl;
			cin >> a;
		}
};

class B: public A {
	public: 
		int b;
		void get_bValue(){
			cout << "Enter value of b: " << endl;
			cin >> b;
		}
};

class C : public B{
	private:
		int c;
		
	public :
		void get_cValue(){
			cout << "Enter value of c : "<< endl;
			cin >> c;
		}
		
		void sum(){
			int ans = a+b+c;
			cout << "Sum : " << ans << endl;
		}
};
int main(){
	C c1;
	A a1;
	a1.get_aValue();
	c1.get_aValue();
	c1.get_bValue();
	c1.get_cValue();
	c1.sum();
	
		
	return 0;
}




  

