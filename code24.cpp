#include <iostream>
#include <sstream>
using namespace std;

int main(){
	
	string str = "1 34";
	
	int num1, num2;
	
	stringstream ss( str );
	ss>>num1>>num2;
	
	cout<<num1 <<endl;
	cout<<num2 <<endl;
	
	
	return 0;
}
