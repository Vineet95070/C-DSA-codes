#include <iostream>
using namespace std;

//Create a class called Employee with attributes such as id, name, and  salary. Overload constructors to initialize objects with different combinations of these attributes.
//Constructor to initialize id only.
//Constructor to initialize id and name.
//Constructor to initialize id, name, and salary.

class Employee{
	
	public:
		int id = 0;
		string name = "Not known";
		int salary = 0;
		
		Employee(int eid){
			
			id = eid;
		}
		
		Employee(int eid, string ename){
			
			id = eid;
			name = ename;
		}
		
		Employee(int eid, string ename, int esalary){
			
			id = eid;
			name = ename;
			salary = esalary;
		}
		
		void display(){
			
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl<<endl;
		}
};

int main(){
	
	Employee e1(123);
	e1.display();
	
	Employee e2(234, "Suman");
	e2.display();
	
	Employee e3(456, "Sujal", 67000);
	e3.display();
	
	return 0;
}
