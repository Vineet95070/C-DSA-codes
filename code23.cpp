#include <iostream>
#include <string.h>
using namespace std;

int main(){
	
	string str = "34";
	
	int num = 10;
	
	cout<< stoi(str) + num <<endl;
	cout<< str + to_string(num)<<endl;
	
	
	return 0;
}
