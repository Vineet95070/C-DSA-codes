#include <iostream>
#include <vector>
using namespace std;

//Sum of all elements of Vectors

int main(){
	
	vector<int> v1;
	v1.push_back(32);
	v1.push_back(12);
	v1.push_back(31);
	v1.push_back(89);
	v1.push_back(78);
	v1.push_back(90);
	v1.push_back(45);
	
	int sum = 0;
	for(int i=0; i<v1.size(); i++){
		
		sum += v1[i];
	}
	cout<<"Sum : "<<sum;

	return 0;
}
