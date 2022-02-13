#include<bits/stdc++.h>
using namespace std; 


int findUnique(int *arr, int size)
{
   int ans = 0;
    for(int i = 0; i<size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()

{   
    
    
    return 0;
}