#include<bits/stdc++.h>
using namespace std; 
class Node{
    public:
        int data;
        Node* next;
};

void printLinkedList(Node* n){
    while (n != NULL)
    {       
        cout<< n->data <<" ";
        n= n->next;
    }
    cout<<endl;
    
}
void ReverseLinkdeList(Node* n){
    if(n!= NULL){
        ReverseLinkdeList(n->next);
        cout<<n->data<<" ";
    }
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

   // Allocate Three nodes in the heap
        head = new Node();
        second = new Node();
        third = new Node();

        // now assign the assign the data in the first node

        head->data = 1; // assign the data in the head
        head->next = second; //Create A link from first node to the second Node

        second->data = 2; //assign the data in the second node
        second->next = third; //Create a link from the second node to the Third node
 
        third->data = 3; //assign the data in the third node 
        third->next = NULL; // assign the link of third node to NULL so this is the last node of the Linked lIst

        printLinkedList(head);
        ReverseLinkdeList(head);
        return 0;
}