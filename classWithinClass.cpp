#include<iostream>
using namespace std;
class Outer{
	private:
		int o_var = 100;
		
		
	public:
		void getOuterInfo(){
			cout << "Outer variable: "<<o_var <<endl;
		}
		
		class Inner{
			private: 
				int i_var = 111;
			public:
				void getInnerInfo(){
					cout << "Inner variable: " << i_var<<endl;
				}
				
				void getOuterFromInner(Outer& obj){
					cout<< "Outer variable: "<<obj.o_var<<endl;
				}
		};	
		
};
int main(){
	Outer o1;
	o1.getOuterInfo();
	Outer::Inner i1;
	i1.getInnerInfo();
	i1.getOuterFromInner(o1);
	
	return 0;
}
