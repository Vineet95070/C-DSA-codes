#include <iostream>
using namespace std;
class Btech{
	private:
		int roll;
		string name;
		static int objID;
		
	public:
		void getData();
		void display();
		static int count;
};

void Btech:: getData(){
	
	
	cout<<"Enter student name: ";
//	cin>>name;		//can not work due to inline isssue
	getline(cin, name);
	cout<<"Enter roll number: ";
	cin>>roll;		
	
	cin.ignore();		//To clear the buffer;
	count++;
	objID++;
}

void Btech::display(){
	cout<<endl<<"Name: "<<name<<endl;
	cout<<"Roll: "<<roll<<endl;
	cout<<"Object id is: "<<objID<<endl<<endl;
}

int Btech::count;
int Btech::objID = 1000;

int main(){
	
	Btech b1;
	b1.getData();
	b1.display();
	b1.getData();
	b1.display();
	b1.getData();
	b1.display();
	b1.getData();
	b1.display();
	cout<<endl<<"Total objects are: "<<b1.count<<endl;
	
	return 0;
}
