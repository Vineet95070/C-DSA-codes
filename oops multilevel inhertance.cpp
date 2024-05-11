#include <iostream>
using namespace std;
class sum{
	
	public:
		int add(int x, int y){
			return x+y;
		}
};

class subtract{
	
	public:
		int sub(int x, int y){
			return x-y;
		}
};

class product{
	public:
		int mult(int x, int y){
			return x*y;
		}
};

class calculator: public sum, public subtract, public product{
	
};

int main(){
	
	calculator c1;
	cout<<"2 + 3 = "<<c1.add(13, 15);
	
	return 0;
}
