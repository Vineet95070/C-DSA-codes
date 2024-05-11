#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* nlink;  // Pointer to the next node
    Node* plink;  // Pointer to the previous node
};

int main() {
    Node* node1 = new Node;  // Create the first node
    node1->data = 14;        // Assign data to the first node
    node1->plink = NULL;     // Set the previous pointer of the first node to NULL
    node1->nlink = NULL;     // Set the next pointer of the first node to NULL

    Node* node2 = new Node;  // Create the second node
    node2->data = 15;        // Assign data to the second node
    node2->plink = node1;    // Set the previous pointer of the second node to point to the first node
    node2->nlink = NULL;     // Set the next pointer of the second node to NULL

    node1->nlink = node2;    // Set the next pointer of the first node to point to the second node

    cout << "Node 1: " << node1->data << "\t" << node1->plink << "\t" << node1->nlink << endl;
    cout << "Node 2: " << node2->data << "\t" << node2->plink << "\t" << node2->nlink << endl;

    return 0;
}

