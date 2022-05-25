#include<bits/stdc++.h>
using namespace std; 

int SubsetSum(int arr[] ,  int n , int sum){
    long dp[n+1][sum+1];

    // If sum is 0, then answer is 1
        for (int i = 0; i <= n; i++)
            dp[i][0] = 1;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++)
            dp[0][i] = 0;


    for(int i = 1 ; i< n+1; i++){
        for(int j = 1; j <sum+1; j++){
            if(arr[i-1] <= j)   
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    int min= INT_MAX;
    for (int i = sum / 2; i >= 0; i--)
    {
        if (dp[n][i] == true)
        {
            min = sum - (i * 2);
            break;
        }
    }
    return min;
}

int minDiffrence(int arr[],int n){
    int sum  = 0;
    for(int i = 0;i<n; i++)
        sum = sum+ arr[i];

    return SubsetSum(arr,n , sum);    
}

int main()
{
    int arr[] = {1,6,11};
    int sum = 50;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<minDiffrence(arr, n);
    return 0;
}