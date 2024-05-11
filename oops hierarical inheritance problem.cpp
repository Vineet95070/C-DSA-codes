#include <iostream>
using namespace std;

//Hierarchical Inheritance

class Shape {
	public:
		
		void volume();
};

class Cube: public Shape{
	public:
		void volume(float side){
			cout<<"Volume: "<<side * side * side<<endl;
		}
		
};

class Cylinder: public Shape{
	public:
		void volume(float r, float h){
			cout<<"Volume: "<<3.14 * r * r * h<<endl;
		}
};

int main() {
    
    Cube c1;
    Cylinder c2;
    
    c1.volume(6);
    c2.volume(6, 12);
    
    return 0;
}
