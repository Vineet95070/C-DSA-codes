#include <iostream>
using namespace std;

//Hybrid Inheritance

class Base{
	public:
		int x;
		void getdata(){
			
			cout<<"I am Base: "<<endl;
			cout<<"Enter an integer: ";
			cin>>x;
		}
};

class derived1: public Base{
	public:
		int y;
		void getdata(){
			
			Base::getdata();
			cout<<"X = "<<x<<endl<<endl;
			
			cout<<"I am Derived-1: "<<endl;
			cout<<"Enter an integer: ";
			cin>>y;
		}
};

class derived2: public Base{
	public:
		int z;
		void getdata(){
			
			cout<<"I am Derived-2: "<<endl;
			cout<<"Enter an integer: ";
			cin>>z;
		}
};

class derived3: public derived1, public derived2{
	public:
		void display(){
			
			derived1::getdata();
			cout<<"Y = "<<y<<endl<<endl;
			derived2::getdata();
			cout<<"Z = "<<z<<endl<<endl;
		}
};

int main(){
	
	derived3 d1;
	d1.display();
}
