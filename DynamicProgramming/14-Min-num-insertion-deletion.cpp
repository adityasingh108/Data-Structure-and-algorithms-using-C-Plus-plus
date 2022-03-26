#include<bits/stdc++.h>
using namespace std; 

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

int minOperations(string str1, string str2) 
	{ 
	    int m = str1.length();
	    int n= str2.length();
	    
	    int insertion = n- lcs(str1, str2, m , n);
	    int deletion = m- lcs(str1, str2 , m, n);
	    return insertion+deletion;
	    
	} 

int main()
{
    string text1 = "geeksforgeeks";
    string text2 = "geeks";
    int n = text1.length();
    int m = text2.length();

    cout<<minOperations(text1, text2);   
    return 0;
}