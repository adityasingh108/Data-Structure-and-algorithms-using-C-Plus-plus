#include<bits/stdc++.h>
using namespace std; 


// create  a Node 

class Node{
    public:
        int data;
        Node *next;

};

// create  a stack class 

class Stack{

    private:
        Node *top;
    public:
            Stack(){
                top = nullptr;
            } 
            void push(int x);
            int pop();
            void Display();    
};

void Stack::push(int x){
    // create a new node with the help of node class
    Node *t = new Node;
    // check if the stack is full or not
    if(t == nullptr)
        cout<<"The stack is full"<<endl;
    else{
        t->data = x;
        t->next= top;
        top= t;
    }    

}


int Stack::pop(){
    // create a variable to store the data of deleted element 

    int x = -1;
    // create a pointer to store the deleted adress
    Node *p;

    // ckeck if the stack is empty or not 
    if(top == nullptr)
        cout<<"stack is Empty"<<endl;
    else{
        p = top;
        top = p->next;
        x= p->data;
        delete p;
    }   
    return x;

}

void Stack::Display(){
    Node *p = top;

    while(p){
        cout<<p->data<<endl;
        p =p->next;
    }
}



int main()

{

    Stack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    
    stk.Display();

    cout<<endl;
    cout<<"the pop element is ::"<<stk.pop()<<endl;
    
    return 0;
}