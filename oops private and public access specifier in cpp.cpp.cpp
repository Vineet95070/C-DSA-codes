#include <iostream>
using namespace std;

class bca{
	
	private :
		int i=20;
		void privatefun(){
			cout<<"Private fun and i = "<<i<<endl;
			cout<<"Private fun and j = "<<j<<endl;
		}
	
	protected: 
		int j= 21;
	
	public:
		int k = 14;
		void publicfun(){
			cout<<"Public fun :"<<endl;
			privatefun();
		}
};

class child: public bca{
	public:
		void childclassfun(){
			cout<<"Child class fun j = "<<j<<endl;
		}
};


int main(){

	bca b1;
	child c1;
	cout<<b1.k<<endl;
	b1.publicfun();
	c1.childclassfun();

return 0;
}



