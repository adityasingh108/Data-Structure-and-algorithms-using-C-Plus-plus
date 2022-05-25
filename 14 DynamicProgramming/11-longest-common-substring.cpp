#include<bits/stdc++.h>
using namespace std; 

void longestCommonSubstr (string text1, string text2, int n, int m)
    {
        int dp[n+1][m+1];
        int maxi = 0;

        for(int i = 0; i<n+1; i++){
            for(int j = 0; j<m+1; j++){
                if(i ==0 || j == 0)
                    dp[i][j] = 0;
            }
        }
    
        for(int i = 1; i<n+1; i++){
            for(int j = 1; j<m+1; j++){
                if(text1[i-1] ==  text2[j-1] )
                  {  dp[i][j] =   1+dp[i-1][j-1];
                    maxi = max(maxi , dp[i][j]);
                  }    
                else 
                    dp[i][j] = 0;
            }
        }
        // return maxi;
        for(int i = 0; i<n+1; i++){
        
            for(int j = 0; j<m+1; j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }        
    }

int main()
{
    string text1 = "ylqpejqbalahwr";
    string text2 = "yrkzavgdmdgtqpg";
    int n = text1.length();
    int m = text2.length();

    longestCommonSubstr(text1, text2 , n ,m);
    return 0;
}