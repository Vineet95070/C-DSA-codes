#include <iostream>
using namespace std;

//Parameterised Constructors:

class Btech{
	
	public:
		int roll;
		char section;
		string name;
		float marks;
		
		//Without with no parameter is called default constructor;
		Btech(int x, char ch){
			
			cout<<"I am constructor: "<<endl;
			roll = x;
			section = ch;
		}
		
		Btech(float f, string str);		//function signature;
};

//Function definition
Btech::Btech(float f, string str): marks(f), name(str) {}

int main(){
	
	Btech b1(12, 'D');
	Btech b2(8.8, "Vini");
	
	cout<<"Name: "<<b2.name<<endl;
	cout<<"Roll: "<<b1.roll<<endl;
	cout<<"Section: "<<b1.section<<endl;
	cout<<"Marks: "<<b2.marks<<endl;
	
	return 0;
}
