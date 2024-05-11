#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* nlink; // Pointer to the next node
    Node* plink; // Pointer to the previous node

    Node() : nlink(NULL), plink(NULL) {} // Default constructor initializes pointers to NULL
    Node(int val) : data(val), nlink(NULL), plink(NULL) {} // Constructor with data initializes pointers to NULL
};

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

void display(Node* head){
	
	Node* temp = head;
	while(temp->nlink != NULL){
		
		cout<<temp->data<<"\t"<<temp->plink<<"\t"<<temp->nlink<<endl;
		temp = temp->nlink;
	}
}

void insertNodeAtHead(Node* &head, int value){
	
	Node* newhead = new Node(value);
	
//	newhead->plink = NULL;	
	newhead->nlink = head;
	head->plink = newhead;
	
	head = newhead;
}

void deleteHead(Node* &head){
	
	Node* temp = head;
	
	head = head->nlink;
	head->plink = NULL;
	
	delete temp;
}

void deleteTail(Node* &head){
	
	Node* temp = head;
	
	while(temp->nlink->nlink != NULL){
		
		temp = temp->nlink;
	}
	
	delete(temp->nlink->nlink);
	temp->nlink = NULL;
}

int main() {
    Node* first = NULL;

    insertAtTail(first, 17);
    insertAtTail(first, 18);
    insertAtTail(first, 19);
    insertAtTail(first, 20);
    insertAtTail(first, 21);
    insertAtTail(first, 22);
    insertAtTail(first, 23);

    insertNodeAtHead(first, 16);
    insertNodeAtHead(first, 15);
    insertNodeAtHead(first, 14);
    insertNodeAtHead(first, 13);
    
//    deleteHead(first);
	deleteTail(first);

    display(first);

    return 0;
}

