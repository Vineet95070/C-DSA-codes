#include <iostream>
#include <vector>
using namespace std;

class Sorting{
	public:
		void selectionSort(vector<int>& v1){
			
			for(int i=0; i<v1.size(); i++){
				
				for(int j=i+1; j<v1.size(); j++){
					
					if(v1[i] > v1[j]){
						
						int temp = v1[i];
						v1[i] = v1[j];
						v1[j] = temp;
					}
				}
			}
		}
};

int main(){
	
	Sorting obj;
	vector <int> v1;
	
	v1.push_back(32);
	v1.push_back(12);
	v1.push_back(31);
	v1.push_back(89);
	v1.push_back(78);
	v1.push_back(90);
	v1.push_back(45);
	
	obj.selectionSort(v1);
	
	for(int i=0; i<v1.size(); i++){
		cout<<v1[i]<<endl;
	}
}
