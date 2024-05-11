#include <iostream>
#include <stack>
using namespace std;


int main() {
    
	stack <int> s1;
	
	s1.push(32);
	s1.push(33);
	s1.push(34);
	s1.push(35);
	s1.push(36);
	s1.push(37);
	s1.push(38);
	
	while(!s1.empty()){
		
		cout<<s1.top()<<endl;
		s1.pop();
	}
	
    return 0;
}

