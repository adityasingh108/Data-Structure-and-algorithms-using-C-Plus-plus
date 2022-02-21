#include<bits/stdc++.h>
using namespace std; 


class Node{
public:
    int data;
    Node *next;
} *head;


void createNode(int A[],int n){
    // create last Node as well tnode 
    Node *last, *temp;
    // create 1st node

    head = new Node;
    head->data = A[0];
    head->next = head;
    last=head;

    for(int i=1; i<n; i++){
        temp = new Node;
        temp->data = A[i];
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}

void Display(Node *p){

    do{
         cout<<p->data<<" ";
        p = p->next;
    }while(p!= head);
}

void RDisplay(Node *p){
    static int flag = 0;
    if(p!= head || flag==0){

        cout<<p->data<<" ";
        RDisplay(p->next);
    }flag = 0;
}


int length(Node *p){
    int len= 0;
    do{
        len++;
        p = p->next;
    }while(p!= head);
    return len;
}

void insert(int index, int value){

    // create a two pointer for helping to reach the element and create a node 



    Node *p , *t;

    if(index <0 || index > length(head))
        return;
    if(index ==0){
        t=new Node;
        t->data = value; 
        if(head == NULL){
            head = t;
            head->next= head;

        }else{
            p = head;
            while (p->next != head)
            {p = p->next;}
            p->next = t;
            t->next = head;
            head = t;
            
        }
    }else{
        p = head;
        for (int i = 1; i < index-1; i++)
        {
            p= p->next;
        }
        t = new Node;
        t->data = value;
        t->next = p->next;
        p->next = t;
        
    }

}


int deleteNode(int index){

    // take a two pointer
    Node *p,*q;
    int x ,i;

    // check the index is valid or not 

    if(index <0 || index > length(head))
        return -1;

    // delete the head Node 

    if(index == 1){
        p = head;
        while (p->next != head)
        {
           p = p->next;
        }
        x = head->data;
        if(head == NULL){
            delete head;
            head = NULL;
        }else{
            p->next = head->next;
            delete head;
            head = p->next;

        }
        
    }else{
        p =head;
        for ( i = 0; i < index-2; i++)
        {
            p = p->next;
        }
        q= p->next;
        p->next = q->next;
        x= q->data;
        delete q;
               
    }
    return x;
}


int main()
{
    int A[] = {1,2,3,4,5,6};
    int n = sizeof(A)/sizeof(A[0]);
    createNode(A,n);
    Display(head);
    cout<<endl;


    cout<<deleteNode(1)<<endl;
    Display(head);
    return 0;
}