#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	pair<int,char> v1[10];
	
	v1[0].first = 1;
	v1[0].second = 'A';
	v1[1].first = 2;
	v1[1].second = 'B';
	v1[2].first = 3;
	v1[2].second = 'C';
	v1[3].first = 4;
	v1[3].second = 'D';
	v1[4].first = 5;
	v1[4].second = 'E';
	v1[5].first = 6;
	v1[5].second = 'F';
	
	for(int i=0; i<5; i++){
		
		cout<<v1[i].second<<"   "<<v1[i].first<<endl;
	}
	

	return 0;
}
