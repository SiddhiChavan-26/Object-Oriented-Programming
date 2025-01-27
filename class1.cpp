#include <iostream>
using namespace std;
class Box {
    private: 
            int len;
            int bred;
            int height;
            
    public:
            void getInfo(){
                cout<<len<<endl;
                cout<<bred<<endl;
                cout<<height<<endl;
            }
            int setInfo(int l,int b, int h){
                len=l;
                bred = b ;
                height = h;
                return 0;
            }
};
int main() {
    Box b1;
    b1.getInfo();
    b1.setInfo(10,20,30);
    b1.getInfo();

    return 0;
}
