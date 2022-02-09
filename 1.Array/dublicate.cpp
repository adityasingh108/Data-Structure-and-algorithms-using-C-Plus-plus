#include<bits/stdc++.h>
using namespace std; 


void dublicate(int A[],int n)
    {
       int last = 0;
       for (int i = 0; i < n; i++)
       {
           if (A[i]==A[i+1] && A[i] != last)
           {
               cout<<A[i]<<endl;
               last = A[i];
           }
           
       }
       
    }


int main()
{
    int A[6]={1,2,2,3,4,4};
    int n = 6;
    dublicate(A,n);    
    return 0;
}