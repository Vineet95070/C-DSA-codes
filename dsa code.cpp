#include <iostream>
using namespace std;
class bca{
	
public: 	//Scope is entire the program
	string name;
	int roll;
	int age;
	
	void getdate(){
		string n;
		int r, a;
		
		cout<<"Enter name: ";
		getline(cin, n);
		cout<<"Roll: ";
		cin>>r;
		cout<<"Age: ";
		cin>>a;
		
		cin.ignore();
		
		name = n;
		roll = r;
		age = a;
	}
	
	void display(){
		cout<<"name: "<<name<<endl;
		cout<<"Roll: "<<roll<<endl;
		cout<<"Age: "<<age<<endl;
	}
};



int main(){	

	bca s1, s2;
	s1.getdate();
	s1.display();
	
	s2.getdate();
	s2.display();
	
return 0;
}
