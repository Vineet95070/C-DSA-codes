#include <iostream>
using namespace std;


//Q. Create a function to insert new node at tail of the linkedlist;
//Q. Create a function to insert a new node at head of the linkedlist;
//Q. Create a function to insert a new node at any position of a linkedlist;



//Creating class Node, to store data and link of the next node of linked list;
class Node{
	
	public:
		int data;
		Node* link;		//link is now pointer to store the Node type of variable address
};

int main(){
 
 	//crating a first node type object named as node1;
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
	
	cout<<node1->data<<"   "<<node1->link<<endl;
	cout<<node2->data<<"   "<<node2->link<<endl;
	cout<<node3->data<<"   "<<node3->link<<endl;
	cout<<node4->data<<"   "<<node4->link<<endl;
	
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
