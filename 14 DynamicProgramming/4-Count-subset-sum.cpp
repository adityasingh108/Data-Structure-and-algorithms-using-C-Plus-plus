#include<bits/stdc++.h>
using namespace std; 

void countSum(int arr[] , int sum , int n ){
    // create a dp 
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
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
            else if(arr[i-1] > j)
                dp[i][j] = dp[i-1][j];
        }
    }
    
    /* print matrix  */
    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<sum+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[] = {9 ,7, 0, 3, 9, 8, 6, 5, 7, 6};
    int sum = 50;
    int n = sizeof(arr) / sizeof(arr[0]);
    countSum(arr, sum, n);

    return 0;
}