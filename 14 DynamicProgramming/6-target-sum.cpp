#include<bits/stdc++.h>
using namespace std; 

int findTargetSum(vector<int> &arr , int target){
    int sum = 0;
    for(int i = 0; i< arr.size(); i++)
        sum = sum + arr[i];

    if(target <-sum || target > sum)
        return 0;

    vector<vector<int>> dp(arr.size() +1 , vector<int>(sum*2 +1 , 0));         
    dp[0][sum] = 1;

    for(int i= 1; i<=arr.size(); i++ ){
        for(int j = 1; j<sum*2+1; j++){
            if(j+arr[i-1] < sum*2+1)
                dp[i][j]  = dp[i][j] + dp[i-1][j+arr[i-1]];
            if(j-arr[i-1] >= 0)
                dp[i][j] = dp[i][j] + dp[i-1][j-arr[i-1]];    
        }
    }
    return dp[arr.size()][sum+target];
}

int main()
{
    
    return 0;
}