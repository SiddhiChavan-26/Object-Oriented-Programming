 #include <iostream>
using namespace std;

class Rectangle{
    private :
            int len;
            int width;
    
    public: 
            // default constructor
            Rectangle(){
                len = 10;
                width = 10;
            }
            
            //Constructor with 1 parameter
            Rectangle(int l){
                len = l;
            }
            
            //constructor with 2 parameters
            Rectangle(int l, int w){
                len = l;
                width = w;
            }
            
            void area(){
                // int l,w,a;
                int a;
                // cout<<"Enter length of rectangle: "<<endl;
                // cin >> l ;
                // cout<<"Enter width of rectangle: "<<endl;
                // cin >> w;
                
                a = len * width ;
                cout <<"The area of rectangle is: "<< a << endl;
            }
            
            void perimeter(){
                int p = (len + width) * 2;
                cout << "Perimeter of rectangle is: " << p << endl;
            }
};
int main() {
  Rectangle r1;
  Rectangle r2 (5);
  Rectangle r3(5,5);
  
  r1.area();
  r1.perimeter();
  r2.area();
  r2.perimeter();
  r3.area();
  r3.perimeter();

    return 0;
}
