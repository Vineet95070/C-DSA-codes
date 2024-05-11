#include <iostream>
#include "mynamespace.cpp"

using namespace std;
using namespace rec;
using namespace tri; 

int main() {
	
	cout<<"Area of Rectangle: "<<rec::Area(23.4f, 12.4f)<<endl;
	cout<<"Area of Triangle: "<<tri::Area(23.4f, 12.5f)<<endl;

    return 0;
}

