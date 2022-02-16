#include<stdio.h>

long long int fact(long long int  n){
    if(n==0)
        return 1;
    return fact(n-1)*n;    
}


int fact_iterative(long long int n){
    int i = 0;
    long long int f = 1;

    if(n == 0)
        return 1;
    for(i= 1; i<=n; i++)
       f  = f*i;

    return f;   

}


int main(){
    long long int  r = fact_iterative(19);
    printf(" %d " , r);
    return 0;
} 