#include <iostream>
#include <vector>
using namespace std;

//Reverse the element of vector 

int main(){
	
	vector<int> v1;
	vector <int> rev;
	v1.push_back(32);
	v1.push_back(12);
	v1.push_back(31);
	v1.push_back(89);
	v1.push_back(78);
	v1.push_back(90);
	v1.push_back(45);
	
	//i start with 6 to 0
	for(int i=v1.size()-1; i>=0; i--){
		
		rev.push_back(v1[i]);
	}
	
	for(int i=0; i<rev.size(); i++){
		
		cout<<rev[i]<<endl;
	}

	return 0;
}
