#include<bits/stdc++.h>
using namespace std; 



// call by value  
/*
void swap(int a , int b )
{
    int temp = a;
    a=b;
    b = temp;
    cout << a  <<"  "<< b<< endl;
}
*/
// call by refrence
/*
void swap(int *a , int *b )
{
    int temp = *a;
    *a=*b;
    *b = temp;
    cout << *a  <<"  "<< *b<< endl;
}
*/


// call by address

void swap(int &a , int &b )
{
    int temp =a;
    a=b;
    b = temp;
    cout << a  <<"  "<< b<< endl;
}

int main()
{
    int a = 5;
    int b = 3;
    cout << "Before "<< a  <<"  "<< b<< endl;
    swap(a, b);
    cout << "aftrer "<< a  <<"  " <<b<< endl;
    
    return 0;
}