// #include<bits/stdc++.h>
// using namespace std; 
#include<stdio.h>


void Toh(int n , int a , int b , int c){
    if(n>0){
        Toh(n-1, a,c,b);
        // cout<<"Remove Disk from "<< a<< " to " <<c<<endl;
        printf(" Remove Disk from %d to %d \n", a ,c);
        Toh(n-1, b,a,c);
    }   
}

int main()

{   
    int a;
    printf("Enter the  disk value :");
    scanf("%d", &a);
    Toh(a,1,2,3);

    return 0;
}