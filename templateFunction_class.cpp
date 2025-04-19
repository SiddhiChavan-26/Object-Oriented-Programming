#include<iostream>
using namespace std;

template<typename T>
T findmax(T a, T b){
	return (a > b) ? a : b; 
}

template <typename T>
class Calculator{
	private:
		T num1, num2;
		
	public:
		Calculator(T n1, T n2){
			num1 = n1;
			num2 = n2;
		}
		
		T add(){
			return num1 +num2;
		}
		
		T subtract(){
			return num1 - num2;
		}
		
		T multiply(){
			return num1 * num2;
		}
		
		T division(){
			if(num2 != 0)
				return num1 / num2;
			else{
				cout << "Division by zero!"<<endl;
				return 0;
			}
		}
};

int main(){
	
	//function call of findmax 
	cout<< "Max of 5 and 10 : "<<findmax<int>(5, 10) <<endl;
	
	//integer calculator
	Calculator <int> intCalc(5, 10);
	cout <<"Integer operations: "<<endl;
	cout << "5 + 10 = "<< intCalc.add() <<endl;
	cout << "5 - 10 = "<< intCalc.subtract() <<endl;
	cout << "5 * 10 = "<< intCalc.multiply() <<endl;
	cout << "5 / 10 = "<< intCalc.division() <<endl;
	
	//float calculator 
	Calculator <float> floatCalc(4.2f, 3.2f);
	cout <<"\nFloat operations: " <<endl;
	cout <<"4.2 + 3.2 = "<<floatCalc.add() << endl;
	cout <<"4.2 - 3.2 = "<<floatCalc.subtract() << endl;
	cout <<"4.2 * 3.2 = "<<floatCalc.multiply() << endl;
	cout <<"4.2 / 3.2 = "<<floatCalc.division() << endl;
	
	//Double calculator 
	Calculator <double> doubleCalc(7.25, 2.5);
	cout <<"\nDouble operations: " <<endl;
	cout <<"7.25 + 2.5 = "<<doubleCalc.add() << endl;
	cout <<"7.25 - 2.5 = "<<doubleCalc.subtract() << endl;
	cout <<"7.25 * 2.5 = "<<doubleCalc.multiply() << endl;
	cout <<"7.25 / 2.5 = "<<doubleCalc.division() << endl;
	
	return 0;
}

