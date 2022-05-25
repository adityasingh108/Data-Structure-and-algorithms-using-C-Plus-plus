#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

bool isplaindrome(string s , int i , int j){
    if(i== j) return true;
    if(i >j ) return true;

    while(i <j){
        if(s[i] != s[j])
            return false;
    } 
    return true;
}

int solve(string s , int i , int j){
    if(i >= j)
        return 0;
    if(isplaindrome(s, i , j) == true)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];

    int mini = INT_MAX;
    for(int k = i ; k <= j-1; k++){
        int temp = solve(s , i , k ) + solve(s, k+1, j) +1;

        if(temp < mini)
            mini =temp; 
    }   
    return dp[i][j] = mini;          
}

int Palindromicpatition(string str){
    memset(dp, -1,sizeof(dp));
    int i = 0;
    int j = str.length();
    return solve(str, i , j);
}

int main()
{
    string s ="aab";
    cout<< Palindromicpatition(s);
    return 0;
}