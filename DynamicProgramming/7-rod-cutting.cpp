#include<bits/stdc++.h>
using namespace std; 


int rodcuttig(int n , int length[] , int price[] ){
    // create a matrix 
    int dp[n+1][n+1];
    // initialize first row and first coloum with zero
    for (int i = 0; i < n+1; i++)
    {
       for(int j = 0; j<n+1; j++){
           if(i ==0 || j == 0)
                dp[i][j] = 0;
       }
    }
    for(int i = 1; i< n+1; i++){
        for(int j = 1; j< n+1; j++){
            if(length[i-1] <= j){
                dp[i][j] = max(price[i-1] + dp[i][j-length[i-1]] , dp[i-1][j] );
            }
            else{
                dp[i][j] = dp[i-1][j-1];
                }
        }
    }

    return dp[n+1][n+1];
    
}

int main()
{
    int lenghth[] = { 1, 2, 3 };
    int price[] = { 10, 20, 30 };
    int N = 5;
    return 0;
}