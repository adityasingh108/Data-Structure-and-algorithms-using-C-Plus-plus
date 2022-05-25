#include<stdio.h>

int fun(int a){
    if(a>100){
        return a-10;
    }
    else{
        return fun(fun(a+11));
    }
}

int main(){

    printf("%d" ,fun(95));
}