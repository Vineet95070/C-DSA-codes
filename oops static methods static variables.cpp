#include <iostream>
using namespace std;
class Btech{
		
	public:
		int nonstaticVar = 34;
		static int staticVar;
		
		static void staticFun(void){
	
			cout<<"I am static Method: "<<endl;
			cout<<"Static variable: "<<staticVar<<endl;
			//it throw an error
//			cout<<"Non static variable: "<<nonstaticVar<<endl;
		}
		
		void nonstaticFun(void){
	
			cout<<"I am non static Method: "<<endl;
			cout<<"Static variable: "<<staticVar<<endl;
			cout<<"Non static variable: "<<nonstaticVar<<endl;
		}
};

int Btech::staticVar;

int main(){
	
	Btech b1;
	b1.nonstaticFun();
	Btech::staticFun();		//We can access static method without crating object of a class
	
	return 0;
}
