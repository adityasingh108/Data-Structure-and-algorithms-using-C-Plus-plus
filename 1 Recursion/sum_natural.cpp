#include<iostream>
using namespace std;

int sum_recursion(int n){
    if(n==0)
        return 0;
    else{
        return sum_recursion(n-1)+n;
    }    
}

int sum_formula(int n){
    return n*(n+1)/2;
}

int sum_iterative(int n){
    int i =0,sum=0;
    for ( i = 1; i <= n; i++)
    {
        sum = sum+i;
    }
    return sum;
}


int main(){
    int a =10;
    cout<<sum_iterative(a);
    
    return 0;
}

