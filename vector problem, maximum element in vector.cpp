#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

//Largest elements in Vectors

int main(){
	
	vector<int> v1;
	v1.push_back(32);
	v1.push_back(12);
	v1.push_back(31);
	v1.push_back(89);
	v1.push_back(78);
	v1.push_back(90);
	v1.push_back(45);
	
	int max = INT_MIN;
	for(int i=0; i<v1.size(); i++){
		
		if(max < v1[i]){
			max = v1[i];
		}
	}
	cout<<"Max : "<<max;

	return 0;
}
