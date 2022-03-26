#include<bits/stdc++.h>
using namespace std; 

int lcs(string s, string t, int m , int n ){
            int dp[m+1][n+1];
            for(int i = 0; i<=m; i++){
                for(int j= 0; j<=n; j++)
                    if(i == 0 || j == 0)
                        dp[i][j] = 0;
            }
            
            for(int i = 1; i<=m; i++){
                for(int j= 1; j<=n; j++)
                    if(s[i-1] == t[j-1])
                        dp[i][j] = 1+ dp[i-1][j-1];
                    else{
                        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                    }
            }
            return dp[m][n];
            
            
        }
    bool isSubsequence(string s, string t) {
        int m = s.length();
        int n  = t.length();
        if(lcs(s, t, m , n ) == s.length())
            return true;
        return false;
    }

int main()
{
    string text1 = "acbcf";
    string text2 = "abcdaf";

    cout<<isSubsequence(text1, text2);
    
    return 0;
}