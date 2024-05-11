#include <iostream>
using namespace std;

class Base{
	
	public:
		int x = 23;
		void getdata(){
			
			cout<<"I am Base class: "<<endl;
			cout<<"Enter an integer: ";
			cin>>x;
		}
};


class derived1:protected Base{
	
	public:
		int y = 23;
		void getdata(){
			
			Base::getdata() ;
			cout<<"X = "<<x<<endl;
			cout<<"I am derived class: "<<endl;
			cout<<"Enter an integer: ";
			cin>>y;
		}
};

class derived2:public derived1{
	
	public:
		void putdata(){
			
			derived1 d1;
			d1.getdata();
			cout<<"y = "<<y<<endl;
			
			Base::getdata();
			cout<<"x = "<<x<<endl;
		}
};

int main()
{
    derived2 d1;
    d1.putdata();

    return 0;
}
