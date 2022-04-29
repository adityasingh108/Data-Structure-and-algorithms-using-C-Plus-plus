#include<bits/stdc++.h>
using namespace std; 

int MCM(int arr[] , int i , int j){
    if (i >= j)
        return 0;

    int k;
    int mini = INT_MAX;
    for (k = i; k < j; k++)
    {
        int temp = MCM(arr, i, k) + MCM(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];

        if (temp < mini)
            mini = temp;
    }
    return mini;   
}

int main()
{
    int arr[] = {1, 6, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 1;
    int j = n-1;
    cout<< MCM(arr, i , j);
    return 0;
}