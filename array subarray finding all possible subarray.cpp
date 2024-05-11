#include <iostream>
using namespace std;

void SubArray(int arr[], int n){
	
	for(int i=0; i<n; i++){
		
		for(int j=i; j<n; j++){
			
			for(int k=i; k<=j; k++){
				
				cout<<arr[k]<<"  ";
			}
			cout<<endl;
		}
	}
}

int main() {
	
	int arr[] = {12,34,12,43,54,56};
	int n = sizeof(arr)/sizeof(int);
	
	SubArray(arr, n);
	
    return 0;
}

