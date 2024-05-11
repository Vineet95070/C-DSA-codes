#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<int> v1;
	
	v1.push_back(23);
	v1.push_back(45);
	v1.push_back(90);
	v1.push_back(89);
	v1.push_back(67);
	v1.push_back(60);
	v1.push_back(12);
	
	for(int num: v1){	//we can also use auto instead of int
		
		cout<<num<<endl;
	}
	
    return 0;
}

