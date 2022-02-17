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

void display(Node *p)
{

    while (p != NULL)
    {
        cout << p->data << " ->";
        p = p->next;
    }
}

void reverse(Node *p)
{
    if (p != NULL)
    {
        reverse(p->next);
        cout << p->data << " ->";
    }
}

int count(Node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}

int sum(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int max(Node *p)
{
    int max = INT_MIN;

    while (p)
    {
        if (max < p->data)
            max = p->data;
        p = p->next;
    }
    return max;
}

/*
int min(Node *p){
    int x = 0;
    if(p == 0)
        return 0;
    x = min(p->data);
    if(x< p->data)
        return x;
    else{
        return p->data;
    }

}*/

int min(Node *p)
{
    int x = INT_MAX;

    while (p)
    {
        if (x > p->data)
            x = p->data;
        p = p->next;
    }
    return x;
}

Node *LSearch(Node *p, int key)
{

    Node *q;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL;
}

Node *RecursiveLSearch(Node *p, int key)
{
    if (p == NULL)
        return NULL;
    if (key == p->data)
        return p;
    return RecursiveLSearch(p->next, key);
}

int main()
{
    int array[] = {4, 5, 8, 6, 9, 8, 9, 6, 8};
    int n = sizeof(array) / sizeof(int);

    Node *temp;

    create(array, n);
    cout << endl;
    cout << "display linked List" << endl;
    display(first);
    cout << endl;

    cout << "Reverse linked List" << endl;
    reverse(first);
    cout << endl;

    cout << "count linked List" << endl;
    cout << count(first) << endl;

    cout << "sum linked List" << endl;
    cout << sum(first) << endl;

    cout << "Max  element linked List" << endl;
    cout << max(first) << endl;

    cout << "Min element in  linked List" << endl;
    cout << min(first) << endl;

    temp = LSearch(first, 9);

    if (temp)
    {
        cout << "Element Found at " << temp->data << endl;
    }
    else
    {
        cout << "Element Not Found " << endl;
    }

    return 0;
}