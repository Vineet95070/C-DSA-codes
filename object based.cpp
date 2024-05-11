#include <iostream>

//Object oriented approch

class bca{
	string name;
	char section;
	int roll;

public:
	
	void display(){
		
		std::cout<<"Hello World!"<<std::endl;
	}
};

int main(){
	
	bca b1;
	
	b1.display();
	
return 0;
}
