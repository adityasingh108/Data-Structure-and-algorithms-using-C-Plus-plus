#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

} *first = nullptr;

void create(int array[], int n)
{
    // create a t pointer and last pointer
    Node *t, *last;
    int i;

    // create first element from the array
    first = new Node;
    first->prev = nullptr;
    first->data = array[0];
    first->next = nullptr;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->prev = last;
        t->data = array[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int length(Node *p)
{
    int len = 0;

    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void insert(Node *head, int index, int value)
{

    // check if the index is valid or not
    if (index < 0 || index > length(head))
        return;

    // creaet a temp pointer
    if (index == 0)
    {
        Node *t = new Node;
        t->prev = nullptr;
        t->data = value;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {

        for (int i = 0; i < index - 1; i++)
        {
            head = head->next;
        }
        Node *t = new Node;
        t->data = value;

        t->prev = head;
        t->next = head->next;
        if (head->next)
            head->next->prev = t;
        head->next = t;
    }
}
int main()
{
    int array[] = {5, 10, 15, 20, 25};
    int n = sizeof(array) / sizeof(array[0]);

    create(array, n);
    insert(first, 4, 100);

    display(first);
    cout << endl;

    cout << "Length of the node is :" << length(first) << endl;

    return 0;
}