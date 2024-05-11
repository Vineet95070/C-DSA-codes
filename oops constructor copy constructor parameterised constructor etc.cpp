#include <iostream>
using namespace std;

struct Base{
	
	public:
		int num=23;
		Base(void){
			
			cout<<"I am default constructor:"<<endl;
		}
		
		//Parameterised constructor;
		Base(int l, int b);
		
//		When no copy constructor is defined compiler use there pre defind copyy constructor
		//Copy constructor;
		Base(Base& other){
			
			cout<<"I am copy constructor:"<<endl;
		}

};

//Parameterised constructor definition
Base::Base(int l, int b){
			
			cout<<"I am parameterised constructor: "<<l*b<<endl;
		};

int main(){

//	Parameterised constructor called
	Base r2(23, 10);
	
//	Default constructor called
	Base* r1 = new Base;
	
//	Copy constructor called 
	Base r3(*r1);
	Base r4(r2);
	Base r8{r2};
	Base r5 = r2;
	Base r6 = *r1;

	//Copy constructor not called;
	Base r7;
	r7 = r2;		

	return 0;	
}
