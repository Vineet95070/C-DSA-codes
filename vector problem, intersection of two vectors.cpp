#include <iostream>
#include <vector>
using namespace std;

//Intersection of two vector 

int main(){
	
	vector<int> v1;
	vector <int> v2;
	v1.push_back(32);
	v1.push_back(12);
	v1.push_back(31);
	v1.push_back(89);
	v1.push_back(78);
	v1.push_back(90);
	v1.push_back(45);
	
	v2.push_back(32);
	v2.push_back(32);
	v2.push_back(33);
	v2.push_back(89);
	v2.push_back(68);
	v2.push_back(90);
	v2.push_back(44);
	
	for(int i=0; i<v1.size(); i++){
		for(int j=0; j<v2.size(); j++){
			
			if(v1[i] == v2[j]){
				
				cout<<v1[i]<<endl;
				break;
			}
		}
	}
	

	return 0;
}
