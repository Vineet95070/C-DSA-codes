#include <iostream>
using namespace std;
class btech{

private:
	int y = 21;

protected:
	int z = 22;
	
public:
	static int x;

};

int btech::x = 23;

int main()
{
    btech s1, s2, s3;
    
    s2.x = 12;
    
    cout<<s1.x<<endl;
    cout<<s3.x<<endl;

    return 0;
}

