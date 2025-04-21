#include<iostream>
#include<vector>

using namespace std;
int main(){
	vector<int> v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	
	//print vector elements
	cout << "Vector elements: "<<endl;
	for (int i = 0; i <v1.size(); ++i) {
    	cout << "Element at index " << i << ": " << v1[i] << endl;
    }
    
    //change value of vector element at index 1
    v1[1] = 15;
    cout << "Modified Vector elements: "<<endl;
    for (int i = 0; i <v1.size(); ++i) {
    	cout << "Element at index " << i << ": " << v1[i] << endl;
    }
    
    //erase element of vector
    v1.erase(v1.begin() + 2);
    cout << "\nVector elements after removal:" <<endl;
  	for (int i = 0; i < v1.size(); ++i) {
    	std::cout << "Element at index " << i << ": " << v1[i] << endl;
    }
}


