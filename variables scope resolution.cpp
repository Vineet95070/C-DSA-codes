#include <iostream>
using namespace std;

int z = 400;

int main(){
	
//	int x = 20;
	int x = 40;		//local variable
	int z = 35;		
	
	cout<<z<<endl;
	cout<<::z<<endl;
	
	x = 23;
	cout<<x<<endl;	//23
	
	{
		int y = 24;
		cout<<y<<endl;
	}
	
	x = 54;
//	cout<<y<<endl;	//y is not in the scope
	cout<<x<<endl;	//54
	
return 0;
}


