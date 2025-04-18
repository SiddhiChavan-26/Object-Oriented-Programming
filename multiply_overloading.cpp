//program for operator overloading for multiplication
#include<iostream>
using namespace std;
class Point{
	private:
		int x_co;
		int y_co;
		
	public:
		//constructor
		Point(int x=0, int y=0):x_co(x),y_co(y){
			
		}
		
		//operator overloading
		Point operator *(const Point& obj){
			return Point(x_co * obj.x_co, y_co * obj.y_co);
		}
		
		//display function
		void show(){
			cout << "New value of x: " << x_co <<endl;
			cout << "New value of y: " << y_co << endl;
		}
};
int main(){
	Point p1(10,5), p2(2,5);
	Point p3= p1*p2;
	p3.show();
	
	return 0;
}
