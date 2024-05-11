#include <iostream>
using namespace std;

inline int product(int x, int y){
	
//	static int c = 0;
//	c++;

	return x*y;
}

int main() {
    
    int a,b;
    cout<<"Enter two integer: ";
    cin>>a>>b;

    cout<<product(a, b)<<endl;
    cout<<product(a, b)<<endl;
    cout<<product(a, b)<<endl;
    cout<<product(a, b)<<endl;
    cout<<product(a, b)<<endl;

    return 0;
}

