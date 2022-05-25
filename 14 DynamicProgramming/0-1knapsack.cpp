#include<bits/stdc++.h>
using namespace std; 

int knapsack(int n , int w , int val[] , int wt[] ){
    if(n == 0 || w == 0)
        return 0;

    if(wt[n-1] <= w)
        return max(val[n-1] +knapsack(n-1, w-wt[n-1] , val , wt) , knapsack(n-1, w, val, wt) );  

    else if(wt[n-1] > w)
        return  knapsack(n-1, w, val, wt);    

}   

int knapsack_momoziation(int n , int w , int val[] , int wt[] ){
    // create a dp 
    int static dp[1000][1000];
    memset(dp , -1, sizeof dp);

    // base case 
    if(n == 0 || w == 0)
        return 0;

    if(dp[n][w] != -1)  
        return dp[n][w];

    if(wt[n-1] <= w)
        return dp[n][w]  = max(val[n-1] +knapsack_momoziation(n-1, w-wt[n-1] , val , wt) , knapsack_momoziation(n-1, w, val, wt) );   
    else if(wt[n-1] > w)
        return dp[n][w ] = knapsack_momoziation(n-1, w, val, wt);

}

int knapsack_tabulation(int n , int w , int val[] , int wt[] ){
    // create a matrix 
    int dp[n+1][w+1];
    // initialize first row and first coloum with zero
    for (int i = 0; i < n+1; i++)
    {
       for(int j = 0; j<w+1; j++){
           if(i ==0 || j == 0)
                dp[i][j] = 0;
       }
    }
    for(int i = 1; i< n+1; i++){
        for(int j = 1; j< w+1; j++){
            if(wt[i-1] <= j){
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]] , dp[i-1][j] );
            }
            else{
                dp[i][j] = dp[i-1][j-1];
                }
        }
    }

    return dp[n][w];
    
}

int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout<<"Maximum profit is :"<< knapsack(n , W, val, wt)<<endl;
    cout<<"Maximum profit is :"<< knapsack_momoziation(n , W, val, wt) << endl;
    cout<<"Maximum profit is :"<< knapsack_tabulation(n , W, val, wt)<<endl;


    return 0;
}