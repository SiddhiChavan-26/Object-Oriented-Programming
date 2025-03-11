#include <iostream>
using namespace std;
class Person{
    private : 
            string name;
            int age;
    
    public:
            Person(){
                name = "abc";
                age = 20;
                cout<<"Default constructor is called."<<endl;
            }
            Person(string n){
                name = n;
                age = 21;
                cout<<"Constructor with 1 parameter is called."<<endl;
            } 
            Person(string n, int a){
                name = n;
                age = a;
                cout<<"Constructor with 2 parameter is called " <<endl;
            }
            void getPersonInfo(){
                cout<<"Name: "<<name <<endl;
                cout<<"Age : "<<age<<endl;
            }
            ~Person(){
                cout<<"Destructor is called."<<endl;
            }
};
class Student: public Person{
    public: 
           int standard;
           int id;
           
           Student(){
               standard = 5;
               id = 23018;
           }
           void getStudentInfo(){
               cout<<"Student information: "<<endl;
               getPersonInfo();
               cout<<"Standard: "<<standard<<endl;
               cout<<"ID: "<<id<<endl;
           }

           
};
int main() {
    Person p1;
    Person p2("riya");
    Person p3("Priya",25);
    p1.getPersonInfo();
    p2.getPersonInfo();
    p3.getPersonInfo();
    
    Student s1;
    s1.getStudentInfo();
    return 0;
}
