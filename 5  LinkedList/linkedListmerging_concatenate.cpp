#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

} *first = NULL , *second = NULL,*third = NULL;

void mergeList(Node* head1, Node* head2)  
{  
    // create a third linked list 
    // Node *third = NULL;
    Node *last = NULL;
    
    // create a node for head1 and head2
    
    Node *first = head1;
    Node *second = head2;
    
    // check  which list has smaller element then third node and last node point on that node
    // create a first node of the third linked list
    
    if(first->data < second ->data ){
        third = last = first;
        first = first->next;
        third->next = NULL;
    }else{
        third = last = second;
        second  = second->next;
        third->next = NULL;
    }
    
    // ckeck ehich data is smaller in whole list point as a third linked list
    
    while(first != NULL && second != NULL){
        if(first->data < second->data ){
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }else{
            
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
    
        }
    }
    
    // if first node is not null then last pointer make as first 
    
    if(first!= NULL){
        last->next = first;
    }else{
        last->next = second;
    }
    
    
}  

void create(int A[], int n)
{

    int i;
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void display(Node *p){

    while(p){
        cout<<p->data<<" ";
        p = p->next;
    }
}

void create_second(int A[], int n)
{

    int i;
    Node *t, *last;
    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void Concatenate(Node *head1, Node *head2){
    // create a tail pointer 
    third = head1;
    while (head1->next != NULL){
        head1 = head1->next;
    }
    head1->next = head2;
    // delete the head 2 from memory
    head2 = NULL;
    

}




int main(){

    int A[] = {1,4,6,8};
    int B[] = {0,2,3,5};

    create(A,3);
    create_second(B,3);

    mergeList(first,second);

    display(third);


}