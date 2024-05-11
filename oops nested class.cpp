#include <iostream>
using namespace std;

class Base1{
	
	public:
		
		Base1(){
			cout<<"Base1 Constructor: "<<endl;
		}
	
		class Base2{
	
			public:
				int x = 34;
				Base2(){
					cout<<"Base2 Constructor: "<<endl;
				}
		};	
};


int main(){
	
//	b1 is a object of Base2 and member of Base1
	Base1::Base2 b1;
	
	return 0;
}
