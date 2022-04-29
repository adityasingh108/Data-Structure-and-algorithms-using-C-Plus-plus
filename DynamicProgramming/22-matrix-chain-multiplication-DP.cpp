#include <bits/stdc++.h>
using namespace std;
int dp[101][101];

int solve(int arr[], int i, int j)
{
    if (i >= j)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];

    int k;
    int mini = INT_MAX;
    for (k = i; k < j; k++)
    {
        int temp = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];

        if (temp < mini)
            mini = temp;
    }
    return dp[i][j] = mini;
}

int matrixMultiplication(int N, int arr[])
{
    int i = 1;
    int j = N - 1;
    memset(dp, -1, sizeof(dp));
    return solve(arr, i, j);
}

int main()
{
    int arr[] = {1, 6, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << matrixMultiplication(n, arr);
    return 0;
}