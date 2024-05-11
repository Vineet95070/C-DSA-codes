#include <iostream>
#include <vector>
using namespace std;

void intersection(vector<int> first, vector<int> second){
	
	vector <int> res;
	for(int i=0; i<first.size(); i++){
		for(int j=0; j<second.size(); j++){
			
			if(first[i] == second[j]){
				
				res.push_back(first[i]);
				continue;
			}
		}
	}
	
	int i=0;
	while(i<res.size()){
		
		cout<<res[i]<<endl;
		i++;
	}
}

int main() {
    
    vector <int> v;
    vector <int> q;
    v.push_back(100);
    v.push_back(143);
    v.push_back(141);
    v.push_back(156);
    v.push_back(169);
    
    q.push_back(100);
    q.push_back(140);
    q.push_back(141);
    q.push_back(154);
    q.push_back(169);
    q.push_back(156);
    
    intersection(v, q);
    unionof(v, q);
    
    return 0;
}






















