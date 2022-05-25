#include<bits/stdc++.h>
using namespace std; 


int isSubsetSum(int arr[] , int n , int sum){
        // create a dp and initialize with  first colom with true and  first row with False

        int dp[n+1][sum];
         // If sum is 0, then answer is true
        for (int i = 0; i <= n; i++)
            dp[i][0] = true;
 
        // If sum is not 0 and set is empty,
        // then answer is false
        for (int i = 1; i <= sum; i++)
            dp[0][i] = false;


        
        for(int i = 1 ; i< n+1; i++){
            for(int j = 1; j <sum+1; j++){
                if(arr[i-1] <= j)   
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }


       /* // PRINT DP
        for(int i = 0; i<n; i++){
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
    int arr[] = {3 ,34 ,4 ,12 ,5, 2};
    int sum = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<< isSubsetSum(arr, n, sum);
    return 0;
}