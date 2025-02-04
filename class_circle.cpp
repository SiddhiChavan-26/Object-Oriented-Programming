#include <iostream>
using namespace std;
class Circle{
    private: 
            int radius;
    public:
            //default constructor
            Circle(){
                int rad;
                cout<<"Enter radius: "<<endl;
                cin >> rad;
                
                radius = rad;
            }
            //constructor with 1 parameter
            Circle(int r){
                radius = r;
            }
            void area(){
                float pi = 3.14;
                float a = pi*radius*radius;
                cout<<"Area is : "<< a <<endl;
            }
            void circumference(){
                float pi = 3.14;
                int c = 2*pi*radius;
                cout<<"Circumference is: "<< c <<endl;
            }
            
};
int main(){
    cout<<"Circle 1:-  "<<endl;
    Circle c1;
    c1.area();
    c1.circumference();
    
    cout<<"Circle 2:- "<<endl;
    Circle c2(10);
    c2.area();
    c2.circumference();
    
    return 0;
}
