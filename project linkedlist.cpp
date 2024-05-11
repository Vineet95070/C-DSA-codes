#include <iostream>
#include <windows.h>
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
	
	HANDLE console_color; 
    console_color = GetStdHandle( 
        STD_OUTPUT_HANDLE); 
  
    // Print different colors from 1 
    // to 50 on the output screen 
    for (int P = 1; P < 2; P++) { 
  
        // P is color code of the 
        // corresponding color 
        SetConsoleTextAttribute( 
            console_color, P); 
  		
  		cout<<endl<<endl<<"===============";
    } 
    
    for (int P = 2; P < 3; P++) { 
  
        // P is color code of the 
        // corresponding color 
        SetConsoleTextAttribute( 
            console_color, P); 
  		
  		cout<<"This is a project based on Linked List Operations";
	
    } 
    
    for (int P = 1; P < 2; P++) { 
  
        // P is color code of the 
        // corresponding color 
        SetConsoleTextAttribute( 
            console_color, P); 
  		
	cout<<"===================="<<endl<<endl;
	
    }
    for (int P = 10; P < 11; P++) { 
  
        // P is color code of the 
        // corresponding color 
        SetConsoleTextAttribute( 
            console_color, P); 
  	
			cout<<"\tCommands to make operations in Linked List :"<<endl;
			cout<<"\tEnter '1' To insert New node in linkedlist: "<<endl;
			cout<<"\tEnter '2' To insert New node at the begning of a linkedlist: "<<endl;
			cout<<"\tEnter '3' To insert New node at specific position in linkedlist: "<<endl;
			cout<<"\tEnter '4' To delete head node in linkedlist: "<<endl;
			cout<<"\tEnter '5' To delete last node in linkedlist: "<<endl;
			cout<<"\tEnter '6' To delete node from specific position in a linkedlist: "<<endl;
	    }
	
	
	Node* node1 = new Node;
    node1->data = 12;
    node1->link = NULL;
    
	Node* node2 = new Node;		//crating a first node type object named as node2;
	node2->data = 34;
	node2->link = NULL;
	node1->link = node2;    
	
	Node* node3 = new Node;
	node3->data = 78;
	node3->link = NULL;
	node2->link = node3;
	
	Node* node4 = new Node;
	node4->data = 23;
	node4->link = NULL;
	node3->link = node4;
	
//	insertAtTail(node1, 24);
//	insertAtTail(node1, 25);
//	insertAtTail(node1, 26);
//	insertAtTail(node1, 27);
//	insertAtHead(node1, 11);
//	
//	insertAtAny(node1, 13, 3);
	
//	cout<<endl<<endl<<"===============";
//	cout<<"This is a project based on Linked List Operations";
//	cout<<"===================="<<endl<<endl;
//	
//	cout<<"\tCommands to make operations in Linked List :"<<endl;
//	cout<<"\tEnter '1' To insert New node in linkedlist: "<<endl;
//	cout<<"\tEnter '2' To insert New node at the begning of a linkedlist: "<<endl;
//	cout<<"\tEnter '3' To insert New node at specific position in linkedlist: "<<endl;
//	cout<<"\tEnter '4' To delete head node in linkedlist: "<<endl;
//	cout<<"\tEnter '5' To delete last node in linkedlist: "<<endl;
//	cout<<"\tEnter '6' To delete node from specific position in a linkedlist: "<<endl;
	
//	display(node1);
	
	delete(node1);
	node1 = NULL;
	delete(node2);
	node2 = NULL;
	delete(node3);
	node3 = NULL;
	delete(node4);
	node4 = NULL;
	
	return 0;
}
