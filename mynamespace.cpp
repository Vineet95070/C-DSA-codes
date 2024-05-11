#include <iostream>
using namespace std;

namespace Rectangle{
	
	float Area(float x, float y){
		return x * y;
	}
}

namespace rec = Rectangle;

namespace Triangle{
	
	float Area(float x, float y){
		return 0.5 * x * y;
	}
}

namespace tri = Triangle;
