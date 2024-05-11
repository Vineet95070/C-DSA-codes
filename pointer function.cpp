#include <iostream>
using namespace std;

void sum(int x){
	
	cout<<"Hello world "<<x<<endl;

}

int main() {
	
	
	// auto ptr = &sum;

	void(*ptr)(int) = sum;
	
	cout<<&ptr<<endl;

	ptr(89);
	ptr(34);
	
    return 0;
}

