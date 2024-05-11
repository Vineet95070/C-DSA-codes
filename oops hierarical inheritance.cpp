#include <iostream>
using namespace std;

//Hierarchical Inheritance

class btech {
	public:
		
		virtual void display() = 0;
};

class child1: public btech{
	public:
		void display() override{
			cout<<"Child-1 "<<endl;
		}
		
};

class child2: public btech{
	public:
		void display() override{
			cout<<"Child-2 "<<endl;
		}
};


int main() {
    
    Bike b1;
    b1.start();
    b1.drive();
    b1.stop();
    
    Car c1;
    c1.start();
    c1.drive();
    c1.stop();

    return 0;
}
