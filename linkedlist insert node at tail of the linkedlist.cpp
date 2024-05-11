#include <iostream>
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
	while(temp != NULL){
		
		cout<<temp->data<<"\t"<<temp->link<<endl;
		temp = temp->link;
	}
}

//Insert at tail
void insertAtTail(Node* &head, int value){
	
	Node* newnode = new Node(value);
	Node* temp = head;
	
	while(temp->link != NULL){
		
		temp = temp->link;
	}
	temp->link = newnode;
}

int main(){
	
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
	
	insertAtTail(node1, 24);
	insertAtTail(node1, 25);
	insertAtTail(node1, 26);
	insertAtTail(node1, 27);
	
	display(node1);
	
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
