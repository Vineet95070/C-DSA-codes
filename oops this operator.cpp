#include <iostream>
using namespace std;
class base {
	public:
		int x = 12;
		void display(int x){
			
			cout<<"base class: "<<endl;
			cout<<"X = "<<x<<endl;
			cout<<"X = "<<this->x<<endl;
			cout<<"this : "<<this<<endl;
		}
		
};

int main() {
    
    base* b1 = new base;
    base b2;

	b2.display(16);
	cout<<"Adress of b2: "<<&b2<<endl<<endl;    
    
    b1->display(14);
    cout<<"Adress of b1: "<<b1<<endl;

    return 0;
}

