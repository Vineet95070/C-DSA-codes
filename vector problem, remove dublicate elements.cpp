#include <iostream>
#include <vector>
using namespace std;

//remove dublicate element in vector 

int main(){
	
	vector<int> v1;
	v1.push_back(32);
	v1.push_back(12);
	v1.push_back(31);
	v1.push_back(89);
	v1.push_back(32);
	v1.push_back(90);
	v1.push_back(45);
	
	for(int i=0; i<v1.size(); i++){
		for(int j=i+1; j<v1.size(); j++){
			
			if(v1[i] == v1[j]){
				
				//it delete the 'j'th element 
				v1.erase(v1.begin() + j);				
			}
		}
	}
	
	for(int i=0; i<v1.size(); i++){
		cout<<v1[i]<<endl;
	}

	return 0;
}
