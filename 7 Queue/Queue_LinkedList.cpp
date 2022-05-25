#include<bits/stdc++.h>
using namespace std; 


class Node{
    public:
        int data;
        Node *next;
} *front =NULL, *rear = NULL;


void enqueue(int x){
    // create a new node to check if it is ul or not
    Node *t = new Node;
    if( t == NULL)
        cout << " Queue is full "<<endl;
    else{
        t->data = x;
        t->next = NULL;
        if(front == nullptr){
            front = rear = t;

        }else{
            rear->next = t;
            rear = t;
        } 
    }  
}

int dequeue(){
    int x = -1;
    Node *p = front;
    // check if is empty or not
    if(front == nullptr)
        cout<<"Queue is empty"<<endl;
    else{
        p = front;
        front = front->next;
        x= p->data;
        delete p;
        }    
    return x;
}

void Display(){
    Node *p = front;
    while(p){
        cout<<p->data<<" "<<endl;
        p = p->next;
    }
}



int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);

    cout<<endl;
    cout<<"Deleted element:"<< dequeue()<<endl;

    Display();
    return 0;
}