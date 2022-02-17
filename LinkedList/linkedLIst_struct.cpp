#include<bits/stdc++.h>
using namespace std; 

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[] , int n){
    int i;
    struct Node *t , *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for ( i = 0; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    

}


int main()
{
    
    return 0;
}