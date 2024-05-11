#include <iostream>
#include <limits>
using namespace std;

int main(){

	long long num = numeric_limits<int>::max();
	
	int i = 0;
	while(num >= 1){
		num /= 2;
		i++;
	}
	cout<<i;

}
