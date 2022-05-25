#include<stdio.h>

int sum(int n){
    if(n==0)
        return 0;
    else{
        return sum(n-1)+n;
    }    
}

int sum2(int n){
    return n*(n+1)/2;
}

int sum3(int n){
    int i =0,sum=0;
    for ( i = 1; i <= n; i++)
    {
        sum = sum+1;
    }
    return sum;
}


int main(){
    int a =10;
    printf("%d" ,sum(a));
    
    return 0;
}

