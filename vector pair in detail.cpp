#include <iostream>
#include <vector>
using namespace std;


int main(){
	
	pair<int, char> p;
	pair<string, int> p2;
	pair<int, char> p3[10];
	
	p.first = 0;
	p.second = 'A';

	p2 = make_pair("Raman kr", 12);

	cout<<p.first<<"\t";
	cout<<p.second<<"\t";
	cout<<endl<<p2.first<<"   "<<p2.second<<endl;
	
	for(int i=0; i<5; i++){
		
		cin>>p3[i].first>>p3[i].second;
	}
	
	for(int i=0; i<5; i++){
		
		cout<<p3[i].first<<"\t"<<p3[i].second<<endl;
	}
	
	return 0;
}
