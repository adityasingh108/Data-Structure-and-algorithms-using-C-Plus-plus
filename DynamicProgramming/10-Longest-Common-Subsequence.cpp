#include<bits/stdc++.h>
using namespace std; 
int static dp[10001][10001];

// using recursion
int LCS(string text1 , string text2 , int n , int m){
    if(n == 0 || m==0)
        return 0;
    if(text1[n-1] == text2[m-1])
        return 1+LCS(text1, text2, n-1, m-1);
    else
        return max(LCS(text1, text2, n-1 , m) , LCS(text1, text2, n , m-1));     
}

// bottom up approch 

int LCS_memoziation(string text1 , string text2 , int n , int m){
    // base case 
    if(n == 0 || m== 0)
        return 0;

    if(dp[n][m] != -1)
        return dp[n][m]; 

    if(text1[n-1] == text2[m-1])
        return  dp[n][m]= 1+LCS_memoziation(text1, text2, n-1, m-1);
    else
        return dp[n][m]= max(LCS_memoziation(text1, text2, n-1 , m) , LCS_memoziation(text1, text2, n , m-1));          

}

// top down appproch

int LCS_Top_down(string text1 , string text2 , int n , int m){

    // create a dp 
    int dp[n+1][m+1];

    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<m+1; j++){
            if(i ==0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<m+1; j++){
            if(text1[i-1] ==  text2[j-1] )
                dp[i][j] =   1+dp[i-1][j-1];
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1] );
        }
    }
    return dp[n][m];
}

int main()
{
    string text1 = "ylqpejqbalahwr";
    string text2 = "yrkzavgdmdgtqpg";
    int n = text1.length();
    int m = text2.length();
    memset(dp, -1, sizeof(dp));
    
    cout<<LCS(text1, text2, n ,m)<<endl;
    cout<<LCS_memoziation(text1, text2, n, m)<<endl;
    cout<<LCS_Top_down(text1, text2, n, m)<<endl;
    return 0;
}