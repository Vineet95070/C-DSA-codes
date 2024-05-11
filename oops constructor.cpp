#include <iostream>
using namespace std;

//Constructors:
//Constructor is a special type of function with same name as class name

//	Constructor can be overloaded;
//	Constructor can not define virtually
//	Constructor invoke when object is created of the class
//	Constructor does not return a value, hence it has no return type

class Btech{
	
	public:
		int data;
		char section;
		
		//Without with no parameter is called default constructor;
		Btech(){
			
			cout<<"I am constructor: "<<endl;
		}
};

int main(){
	
	Btech b1, b2;
	
	return 0;
}
