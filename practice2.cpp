#include <iostream>
#include <vector>
using namespace std;

//Node is a class denote that node of a linkedlist;
class Node{
	
	public:
		int data;	//this is use to store data of linked list
		Node* link;		//it use to contatin the address of another node;
};

int main(){
	
	Node* node1;
	
	node1->data = 10;
	node1->link = NULL;
	
	Node* node2;
	node2->data = 11;
	node2->link = NULL;
	node1->link = node2;
	
	return  0;
}
