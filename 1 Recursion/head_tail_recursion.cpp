#include<bits/stdc++.h>
using namespace std; 

void tail(int n ){
    if(n>0){
        cout << n<<" ";
        tail(n-1);
    }
    
}

void head(int n){
    if(n>0){
        head(n-1);
        cout << n<<" ";
    }
}


int main()
{
    int a = 5;
    tail(a);
    cout<<endl;
    head(a);
    return 0;
}