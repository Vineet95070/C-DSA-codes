#include <iostream>
using namespace std;

class base{
	
//+----------------------+-------------------+-------------------+
//|                      | Public Members    | Protected Members | Private Members   |
//+----------------------+-------------------+-------------------+
//| Base Class           | Public            | Protected         | private           |
//+----------------------+-------------------+-------------------+
//| Derived Class       | (Private Inheritance)                  |
//| (Private Inheritance)| Private           | Private           | Not Accessible    |
//+----------------------+-------------------+-------------------+
//| Derived Class       | (Protected Inheritance)                |
//| (Protected Inheritance)| Protected       | Protected         | Not Accessible    |
//+----------------------+-------------------+-------------------+
//| Derived Class       | (Public Inheritance)                   |
//| (Public Inheritance)| Public            | Protected          | Not Accessible    |
//+----------------------+-------------------+-------------------+
//
//	private:
//		int k = 32;
//	
	public:
		int i=34;

	protected:
		int j=30;
};

class derived1: private base{
	public:
		void classderived(){
			cout<<"j = "<<j<<endl;
			cout<<"i = "<<i<<endl;
			cout<<"Derived 1 class"<<endl;
		}
};

class derived2: protected base{
	public:
		void classderived(){
			cout<<"j = "<<j<<endl;
			cout<<"i = "<<i<<endl;
			cout<<"Derived 2 class"<<endl;
		}
};

class derived3: public base{
	public:
		void classderived(){
			cout<<"j = "<<j<<endl;
			cout<<"i = "<<i<<endl;
			cout<<"Derived 3 class"<<endl;
		}
};

class derived4: public derived3{
	public:
		void disp(){
			cout<<"J = "<<j<<endl;
			cout<<"i = "<<i<<endl;
			cout<<"Derived 4 class"<<endl;
		}
};

int main(){

	derived1 ob1;
	derived2 ob2;
	derived3 ob3;
	derived4 ob4;
	
	ob1.classderived();
	ob2.classderived();
	ob3.classderived();
	ob4.disp();

return 0;
}



