#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float a = 123.4567f;
	double b = 123.456789123456789;
	long double c = 123.456789123456789l;
	
	cout << setprecision(8);
	cout << "float a: "<< a << endl;
	cout << setprecision(16);
	cout <<"Double b: "<< b << endl;
	cout <<"Long double c: "<< c << endl;
	return 0;
}
