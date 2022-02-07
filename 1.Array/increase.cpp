#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int *p = new int [5];

    int *q= new int [10]; // declar a new pointer of the size of 10
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] <<endl;
    }

    // copy the P elemnts in the Q

    for (int i = 0; i < 10; i++)
    {
        q[i] = p[i];
    }
    delete []p; // delte the p array 

    p = q; // change the pointer address

    q = NULL; //  assign the q address to the null
    cout<<"new array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] <<endl;
    }

    
    
    
    return 0;
}