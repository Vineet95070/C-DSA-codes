#include <iostream>
using namespace std;

template <class T, class U, class V>
auto sum(T a, U b, V c){
	
	return a+b+c;
}

int main() {
	
	double c = 23.34;
    {
        int a = 25, b = 25;
        cout << sum(a, b, c) << endl;
    }

    {
        int a = 25;
        float b = 25.3;
        cout << sum(a, b, c) << endl;
    }

    {
        float a = 25.3;
        int b = 25;
        cout << sum(a, b, c) << endl;
    }
	
    {
        float a = 25.3, b = 25.3;
        cout << sum(a, b, c) << endl;
    }

    return 0;
}

