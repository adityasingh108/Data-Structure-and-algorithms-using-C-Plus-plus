#include<bits/stdc++.h>
using namespace std; 

void fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }

}


void fun2(int n ){
    if(n>0){
        fun2(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int a = 5;

    fun1(a);
    cout<<endl;
    fun2(a);
    return 0;
}