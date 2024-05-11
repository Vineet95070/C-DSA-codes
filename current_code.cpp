#include <iostream>
using namespace std;

namespace rectangle{
	
	float length = 12.5;
	float breadth = 12.5;

	float Area(float b, float l){
		
		return b*l;
	}
	
	float Area(){
		
		return length * breadth;
	}
}

namespace triangle{
	
	float base = 12.5;
	float height = 12.5;
	
	float Area(){
		
		return 0.5 * base * height;
	}
	
	float Area(float b, float h){
		
		return 0.5 * b * h;
	}
}

int main(){
	
	cout<<triangle::Area()<<endl;
	cout<<triangle::Area(23.1, 34.5)<<endl<<endl;
	
	cout<<rectangle::Area()<<endl;
	cout<<rectangle::Area(43.23, 2.2);
	
	return 0;
}
