#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

void sorting(vector<pair<int, int> >&v1){
	
	for(int i=0; i<v1.size(); i++){
		
		for(int j=i+1; j<v1.size(); j++){
			
			if(v1[i].first > v1[j].first){

				swap(v1[i].first, v1[j].first);
				swap(v1[i].second, v1[j].second);
			}
		}
	}
}

int main(){
	
	int arr[] = {34,12,39,65,76,87,89,56};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	vector<pair<int, int> > v1;
	
	for(int i=0; i<n; i++){
		
		v1.push_back(make_pair(arr[i], i));
	}
	
	sorting(v1);
	
	for(int i=0; i<v1.size(); i++){
		
		cout<<v1[i].first<<"  ";
		cout<<v1[i].second<<endl;
	}
	

	return 0;
}
