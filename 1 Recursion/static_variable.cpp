#include<bits/stdc++.h>
using namespace std; 


int fun(int a){
    static int x =0 ; // its increament all time and initialize only one time
    if(a>0){
        x++;
        return fun(a-1)+x;
    }
    return 0;
}

int main()
{
    int a = 5;
    cout<<"the value is "<<fun(a);
    return 0;
}