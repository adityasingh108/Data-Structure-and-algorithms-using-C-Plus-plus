#include<stdio.h>

int power(int  m ,int n){
    if(n==0)
        return 1;
    return power(m,n-1) *m;    
}


int power_improve(int m,int n){

    if(n == 0)
        return 1;
    if (n%2==0)
        return power_improve(m*m,n/2);
    else{
        return  m*power_improve(m*m,(n-1)/2);
    }       

}


int main(){
    int  r = power(7,7);
    int  r2 = power_improve(7,7);


    printf("%d " , r2);
    printf("%d " , r);
    return 0;
} 