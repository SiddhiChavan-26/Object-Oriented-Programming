#include<iostream>
//using namespace std;
int main(){
	int main = 10; // we can use predifined identifiers as a name of variable  
	//but it is bad practice to use predefined identifiers as a name of variable
	std::cout << main << std::endl;
	int cout = 20;  
	std::cout<< cout << std::endl;  // in this line if we use cout without using std:: it will assume that cout as a variable
	return 0;
}
