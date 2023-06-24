#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int binarySearh(int arr[], int n, int target)
{
    int low = 0;
    int high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            high = mid - 1;
        else
            low = mid + 1;
    }
}

int main()
{

    int arr[4] = {4, 478, 56, 23 };
    cout << binarySearh(arr, 4 , 5);
    return 0;
}