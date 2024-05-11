#include <iostream>
using namespace std;

class time{
	
	public:
		int hour;
		int minute;
		int second;
		
		time(){
			
			hour = 0;
			minute = 0;
			second = 0;
			
			display();
		}
		
		time(int h, int m, int s){
			
			if(h >= 23 || m >= 60 || s >= 60){
				
				cout<<"Invalid time: "<<endl;
				return; 
			}
			
			hour = h;
			minute = m;
			second = s;
			
			display();
		}
		
		time (int tsecond){
			
			hour = tsecond / 3600;
			minute = (tsecond % 3600) / 60;
			second = (tsecond % 3600) % 60;
			
			display();
		}
		
		void display(){
			
			cout<<hour<<" : "<<minute<<" : "<<second<<endl;
		}
};

int main(){
	
	time t1;
//	t1.display();
	
	time t2(54, 23, 56);
//	t2.display();
	
	time t3(19000);
//	t3.display();
	
	return 0;
}
