#include <iostream>
using namespace std;

int main() {
	
	int x = 32;
	
	int &y = x;
	
	cout<<y<<endl;
	cout<<x<<endl;
	cout<<&y<<endl;
	cout<<&x<<endl;
		
    return 0;
}

