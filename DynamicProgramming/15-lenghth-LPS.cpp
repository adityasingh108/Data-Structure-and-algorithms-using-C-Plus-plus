#include<bits/stdc++.h>
using namespace std; 
string reve(string str){
    reverse(str.begin(), str.end());
    return str;
}
int lcs(string s1, string s2, int m, int n)
{
    int dp[m + 1][n + 1];

    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[m][n];
}


int longestPalinSubseq(string a) {
    string b = reve(a);

    int m = a.length();
    int n = b.length();

    

    return lcs(a, b , m , n);;
        
    }

int main()
{
    string text1 = "bbbab";

    cout<<longestPalinSubseq(text1); 
    
    return 0;
}