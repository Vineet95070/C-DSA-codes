#include <iostream>
using namespace std;

//Template function is use for generic programming:
//	Generic programming means independent of data types

//we can also use typename instead of class
//template <typename T, typename U>
template <class T, class U>
void  sum(T a, U b){
	cout<<"Total is: "<<a+b<<endl;
}

//void sum(int a, int b){
//	cout<<"Total is: "<<a+b<<endl;	
//}
//
//void sum(float a, float b){
//	cout<<"Total is: "<<a+b<<endl;
//}
//
//void sum(int a, float b){
//	cout<<"total is: "<<a+b<<endl;
//}
//
//void sum(float a, int b){
//	cout<<"Total is: "<<a+b<<endl;
//}

int main()
{
    sum(34.4f ,99.6f);
	sum(13, 12);
	sum(12.2f, 13);
	sum(12, 13.2f);	
	
    return 0;
}
