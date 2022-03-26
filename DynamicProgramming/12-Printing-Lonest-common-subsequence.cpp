#include<bits/stdc++.h>
using namespace std; 

string printLCS(string text1 , string text2, int n , int m )
{
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

    int i = n  ,j =m;
    string s = "";
    while(i>0  && j>0 ){
        if(text1[i-1] == text2[j-1]){
            s.push_back(text1[i-1]);
            i--;
            j--;
        }
        else{
            if(dp[i][j-1] > dp[i-1] [j])
                j--;
            else 
                i--;    
        }

    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string text1 = "acbcf";
    string text2 = "abcdaf";
    int n = text1.length();
    int m = text2.length();

    cout<<printLCS(text1, text2, n , m);
    return 0;
}