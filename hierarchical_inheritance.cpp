#include<iostream>
using namespace std;
class Person{
	public:
		void name(){
			cout << "Name of person is ABC" << endl;
		}
};

class Student: public Person{
	public:
		int student_id = 12345;
		void id(){
			cout << "Student ID is: " << student_id << endl;
		}
};

class Employee : public Person{
	public :
		int employee_id = 102030;
		
		void e_id(){
			cout << "Employee ID is: " << employee_id << endl;
		}
};

class Intern: public Person{
	public :
		int daysOfInternship = 30;
		void display(){
			cout << "Days of internship : " << daysOfInternship << endl;
		}
};
int main(){
	Person p1;
	p1.name();
	
	Employee e1;
	e1.name();
	e1.e_id();
	
	Intern i1;
	i1.display();
	i1.name();
	return 0;
}
