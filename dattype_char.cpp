#include<iostream>
using namespace std;
int main(){
	char ch = 'a';
	int value = ch;
	cout << "character a: " << ch << endl;
	cout << "char to int: "<< (int)ch << endl;
	cout << value << endl;
	
	char ch1 = '2';
	cout << "character '2': "<< ch1 << endl;
	cout <<  "char to int: "<< (int)ch1 << endl;
	
	char ch2 = 128;
	cout << (int)ch2 << endl; //here this line prints -128 because in signed char after 127 there is -128 so it prints -128
	return 0;
}
