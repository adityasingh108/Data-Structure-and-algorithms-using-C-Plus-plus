#include<bits/stdc++.h>
using namespace std; 



class Stack{
private:
    int size;
    int top;
    int *st;
public:
    Stack(){
        size=10;
        top = -1;
        st = new int[size];
    }
    Stack(int size){
        this->size=size;
        top = -1;
        st = new int[this->size];
    }
    void push(int x);
    int   pop();
    int  peek(int index);
    int stacktop();
    int isEmpty();
    int isFull();
    void Display();

};

void Stack::push(int x){
    if(isFull())
        cout << "stack Overflow"<<endl;

    else{
        top++;
        st[top]= x;

    }    
}


int Stack::peek(int index)
{
    int x = -1;
    if (top - index + 1 < 0)
        cout << "Invalid Index" << endl;
    else
        x = st[top - index + 1];
    return x;
}

int Stack::stacktop()
{
    if (isEmpty())
        return -1;
    return st[top];
}

int Stack::isFull(){
    return top == size-1;
}


int Stack::pop(){
    if (isEmpty())
        return -1;
    return st[top];

}


int Stack::isEmpty(){
    return top == -1;

}

void Stack::Display(){
    for(int i = top; i>=0; i--){
        cout<<st[i]<<endl;
    }
}


int main()
{  
    Stack   stk(10);

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.Display();

    
    return 0;
}