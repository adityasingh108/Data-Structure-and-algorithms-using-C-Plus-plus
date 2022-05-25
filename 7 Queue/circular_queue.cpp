#include<bits/stdc++.h>
using namespace std; 

class Queue{
    private:
        int size;
        int front;
        int rear;
        int *Q; 
    public:
        Queue(){
            front = rear= 0;
            size = 10;
            Q = new int[size]; 
        }
        Queue(int size){
            front = rear= -1;
            this->size = size;
            Q = new int[this->size];
        }
        void enqueue(int x);
        int dequeue();
        void Display();



};

void Queue::enqueue(int x){
      if((rear+1)% size ==front)
        cout<<"Queue is Full"<<endl;
      else
        {
            rear = (rear+1)%size;
            Q[rear] = x;
        }    
}


int Queue::dequeue(){
        int x = -1;
        if(front == rear)
            cout<<"Queue is Empty"<<endl;
        else{
            front = (front+1)%size;
            x= Q[front];
            }
        return x;        
}


void Queue::Display(){
    int i = front+1;

    do{
        cout<<Q[i]<<endl;
        i = (i+1)%size;

    }while (i != (rear+1)%size);
    
}


int main()
{ 
    Queue q(10);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    
    cout<<"the deleted element is::"<<q.dequeue()<<endl;

    q.Display();
    return 0;
}