#include <iostream>
using namespace std;

class Base1{
	
	public:
	
	Base1(){
		
		cout<<"Base1 class constructor: "<<endl;
	}	
};

class Base2: public Base1{
	
	public:
		Base2(){
			cout<<"Base2 constructor: "<<endl;
		}
};

class Base3: public Base1{
	
	public:
		Base3(){
			cout<<"Base3 constructor: "<<endl;
		}
};

class derived: public Base3, public Base2{
	
	public:
};

int main(){
	
	derived d1;
	
	
	return 0;
}
