#include <iostream>
#include <vector>
using namespace std;

//Missing value in vector

int main(){
	
	vector<int> v1;
	
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(9);	//missing number is 8
	v1.push_back(10);
	
	int sum1 = 0, n = v1.size();
	
	int sum2 = n*(n+1)/2;
	
	for(int i=0; i<v1.size(); i++){
		sum1 += v1[i];
	}
	
	cout<<"Difference is : "<<sum2-sum1;

	return 0;
}
