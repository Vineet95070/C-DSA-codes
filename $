#include <iostream>
using namespace std;

//Design a class called Time to represent time in hours, minutes, and seconds. Implement constructors to initialize objects using different time formats such as HH:MM:SS, total seconds, or default values.


class time{
	
	int hour;
	int minute;
	int second;
	
	public:
		time(): hour(0), minute(0), second(0) {}
		
		time(int h, int m, int s): hour(h), minute(m), second(s){}
		
		time(int tsecond){
			
			hour = tsecond / 3600;
			minute = (tsecond % 3600) / 60;
			second = (tsecond % 3600) % 60;
		}
		
		void display(){
			
			cout<<hour<<" : "<<minute<<" : "<<second<<endl;
		}
};

int main() {
	
	time t1;
	time t2(23,34,52);
	time t3(11405);
	
	t1.display();
	t2.display();
	t3.display();
	
    return 0;
}

