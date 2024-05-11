#include <iostream>
using namespace std;

class Node{
	
	public: 
		int data;
		Node* nlink;
		Node* plink;
		
		Node(): nlink(NULL), plink(NULL){}
		Node(int val): data(val), nlink(NULL), plink(NULL){}
};

void display(Node* head){
	
	Node* temp = head;
	while(temp != NULL){
		
		cout<<temp->data<<"\t"<<temp->plink<<"\t"<<temp->nlink<<endl;
		temp = temp->nlink;
	}
	
}

void insertNodeAtHead(Node* &head, int value){
	
	Node* newnode = new Node(value);
	
	newnode->nlink = head;
	head->plink = newnode;
//	newnode->plink = NULL;  //it was done by constructor;
	
	head = newnode;
}

void insertAtTail(Node* &head, int value){
	
	Node* newnode = new Node(value);
	
	if(head == NULL){
		
		head = newnode;
		return;
	}
	
	Node* temp = head;
	while(temp->nlink != NULL){
		
		temp = temp->nlink;
	}
	
	newnode->plink = temp;
	temp->nlink = newnode;
}

void deletingHead(Node* &head){
	
	Node* temp = head;
	
	head = head->nlink;
	head->plink = NULL;
	
	delete temp;
}

int main(){
	
	Node* first = NULL;
	
	insertAtTail(first, 17);
	insertAtTail(first, 18);
	insertAtTail(first, 19);
	insertAtTail(first, 20);
	insertAtTail(first, 21);
	insertAtTail(first, 22);
	insertAtTail(first, 23);
	
	insertNodeAtHead(first, 15);
	insertNodeAtHead(first, 16);
	
	deletingHead(first);
	
	display(first);
	
	return 0;
}
