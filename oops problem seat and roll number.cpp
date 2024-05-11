#include <iostream>
using namespace std;

class StudentTracker{
	public:
		int roll[100];
		int sno[100];
		int count = 0;
		
		void setdata();
		void display();
};

void StudentTracker::setdata(){
	
	cout<<"Enter student roll: ";
	cin>>roll[count];
	int current = roll[count];
	
	int i = 0;
	while(i != count){
		
		if(roll[i] == current){
			
			cout<<"Seat is already allocated to this Roll: ";
			exit(1);
		}
		i++;
	}
			
	sno[count] = count+1;
	count++;
}

void StudentTracker::display(){
	
	int i=0;
	while(i != count){
		cout<<"Roll: "<<roll[i]<<"\t"<<"Seat Number: "<<sno[i]<<endl;
		i++;
	}
}

int main(){
	
	StudentTracker s1;

	s1.setdata();
	s1.setdata();
	s1.setdata();
	s1.display();
	
return 0;
}



