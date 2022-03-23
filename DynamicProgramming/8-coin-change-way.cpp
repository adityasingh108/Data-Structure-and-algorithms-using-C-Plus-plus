#include<bits/stdc++.h>
using namespace std; 

int maximumWays(int coins[] , int sum , int n ){
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
            if(coins[i-1] <= j)   
                dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    /* print matrix  
    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<sum+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    return dp[n][sum];
}
int main()
{
    int coins[] = {1,2,5};
    int amount = 5;
    int n = sizeof(coins) / sizeof(coins[0]);
    cout<< maximumWays(coins, amount, n);

    return 0;
}