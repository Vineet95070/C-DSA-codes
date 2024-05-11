#include <iostream>
using namespace std;

class Node{
	
	public:
		int data;
		Node* link;	
		
		Node(int value){
			
			data = value;
			link = NULL;
		}
		
		Node(){}
};

void insertAt(Node* &head, int value, int pos){
	
	Node* newnode = new Node(value);
	Node* temp = head;
	
	int count = 1;
	while(count != pos-1){
		
		temp = temp->link;
		count++;
	}
	
	newnode->link = temp->link;
	temp->link = newnode;
}

void display(Node* head){
	
	Node* temp = head;	
	while(temp != NULL){
		
		cout<<temp->data<<"\t"<<temp->link<<endl;
		temp = temp->link;
	}
}

void insertAtTail(Node* &head, int value){
	
	Node* newnode = new Node(value);
	Node* temp = head;
	
	while(temp->link != NULL){
		
		temp = temp->link;
	}
	temp->link = newnode;
}

void deleteHead(Node* &head){
	
	Node* temp = head;
	head = head->link;
	
	delete temp;	//delete origenal node;
	temp = NULL;	//nullify temp, to avoid dangling pointer
}

void deleteAt(Node* &head, int pos){

    Node* temp = head;

    int count = 1;
    // Traverse the list until the node before the position to be deleted
    while(count != pos-1){
        temp = temp->link;
        count++;
    }
    // Update the links to skip the node at the specified position
    temp->link = temp->link->link;
}



int main(){
	
	Node* node1 = new Node;
	node1->data = 12;
	node1->link = NULL;
	
	Node* node2 = new Node;
	node2->data = 13;
	node2->link = NULL;
	node1->link = node2;
	
	Node* node3 = new Node;
	node3->data = 14;
	node3->link = NULL;
	node2->link = node3;
	
	insertAt(node1, 144, 3);
	insertAtTail(node1, 15);
	insertAtTail(node1, 16);
	insertAtTail(node1, 17);
	insertAtTail(node1, 18);
	insertAtTail(node1, 19);
	
//	deleteHead(node1);
	deleteAt(node1, 3);
	
	display(node1);	
}
