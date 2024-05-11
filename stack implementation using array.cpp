#include <iostream>
using namespace std;

#define n 5

class Stack{
	
	int arr[n];
	int count = -1;	
	
	public:
		
		void push(int val){
			
			if(count == n-1){
				
				cout<<"Stack overflow !!"<<endl;
				return;
			}
			
			count++;
			arr[count] = val;
		}
		
		void pop(){
			
			if(count == -1){
				
				cout<<"No element to pop !"<<endl;
				return;
			}
			
			count--;
		}
		
		int top(){
			
			if(count == -1){
				
				cout<<"No element in stack: "<<endl;
				exit(1);
			}
			
			return arr[count];
		}
		
		bool empty(){
			
			if(count == -1){
				
				return true;
			}
			else{
				
				return false;
			}
		}

		int size(){
			
			return count;
		}
};

int main(){
	
	Stack s1;
	
	s1.push(12);
	s1.push(13);
	s1.push(14);
	s1.push(15);
	s1.push(16);
	s1.push(43);
	
	cout<<"top(): "<<s1.top()<<endl;
	
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	
	cout<<"top(): "<<s1.top()<<endl;
	
	return 0;
}
