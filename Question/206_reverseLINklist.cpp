#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

} *first = NULL;




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


void display(Node *head){

    if(head == NULL)
        return;
    while(head){
        cout<<head->data <<" ";
        head = head->next;
    }    
}


Node * reverse(Node *head){
    Node *p=head;
        Node *q= NULL;
        Node *r = NULL;
        
        while(p != NULL){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
           
        }
        first = q;
}


int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    create(arr,n);
    display(first);
    reverse(first);
    cout<<endl;
    display(first);

}