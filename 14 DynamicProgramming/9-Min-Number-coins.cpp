#include<bits/stdc++.h>
using namespace std;

int coinsMinimum(int coins[] , int amount , int M){
    int Max = amount + 1;
        vector<int> dp(amount + 1, Max);
        dp[0] = 0;
        for (int i = 1; i <= amount; i++) {
            for (int j = 0; j < M; j++) {
                if (coins[j] <= i) {
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
}
int main()
{
    int coins[] = {1,2,5};
    int amount = 11;
    int n = sizeof(coins) / sizeof(coins[0]);
    cout<<coinsMinimum(coins, amount, n);
    return 0; 
}