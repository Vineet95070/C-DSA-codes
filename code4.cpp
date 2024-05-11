#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class Node{
public:
	
	int data;
	Node* link;
	
	Node(){
		link = NULL;
	}
	
	Node(int value){
		
		data = value;
		link = NULL;			
	}
};

void display(Node* head){
	
	Node* temp = head;
	int i = 0;
	while(temp != NULL){
		
		cout<<i<<"\t"<<temp->data<<"\t"<<temp->link<<endl;
		temp = temp->link;
		i++;
	}
}

void insertAtHead(Node* &head, int value) {
    // Creating a new node with the given value
    Node* newhead = new Node(value);

    // Setting the link of the new node to point to the current head node
    newhead->link = head;

    // Updating the head pointer to point to the new node, making it the new head
    head = newhead;
}


void insertAtTail(Node* &head, int value){
	
	Node* newnode = new Node(value);
	
	if(head == NULL){
		
		head = newnode;
		return;
	}
	
	Node* temp = head;
	
	while(temp->link != NULL){
		
		temp = temp->link;
	}
	temp->link = newnode;
}

void insertAtSpecificPosition(Node* &head, int value, int position){
    // Create a new node with the given value
    Node* newnode = new Node(value);

    // Initialize a temporary pointer to traverse the list
    Node* temp = head;

    // Initialize a counter to keep track of the current position
    int i = 1;

    // Traverse the list until the desired position
    while (i != position - 1) {
        temp = temp->link;
        i++;
    }

    // Insert the new node after the current position
    newnode->link = temp->link;
    temp->link = newnode;
}

int main(){
	
//	clrscr();
	
	Node* first = NULL;
	
	cout<<endl<<endl<<"===============";
    cout<<"This is a project based on Linked List Operations";
    cout<<"===================="<<endl<<endl;
    
    cout<<"\tCommands to make operations in Linked List :"<<endl;
	cout<<"\tEnter '1' To insert New node in linkedlist: "<<endl;
	cout<<"\tEnter '2' To insert New node at the begning of a linkedlist: "<<endl;
	cout<<"\tEnter '3' To insert New node at specific position in linkedlist: "<<endl;
	cout<<"\tEnter '4' To delete head node in linkedlist: "<<endl;
	cout<<"\tEnter '5' To delete last node in linkedlist: "<<endl;
	cout<<"\tEnter '6' To delete node from specific position in a linkedlist: "<<endl;
	cout<<"\tEnter '9' To display your list: "<<endl;

    while(true){
    	
    	int op, val;
    	cout<<"\n\tEnter digit as your choise: ";
    	cin>>op;
    	
    	switch(op){
    		
    		case 1:
    			cout<<"\n\tEnter the integer data you want to insert inside node: ";
    			cin>>val;
    			insertAtTail(first, val);
    			continue;
    		
    		case 9:
    			cout<<endl<<"List is: "<<endl<<endl;
    			display(first);
    			break;
    			
    		default: 
    			cout<<"\n\tInvalid Input: "<<endl;
    			
		}
	}
	
	getch();
	
	return 0;
}
