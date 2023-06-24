#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int second_largest(int arr[], int n)
{
    // sort(arr, arr+ n);
    // // return arr[n-2];
    // int largest = arr[n-1];
    // for( n= n-1 ; n>=0; n--){
    //     if(arr[n] != largest){
    //         return arr[n];
    //         break;
    //     }
    // }
    // return -1; // time  complexiry =  n + O(n log n ) in wrost case

    // 2d approch
    /*
        int large = INT_MIN;
        for (int  i = 0; i < n; i++)
        {
            if(arr[i] >= large)
                large = arr[i];
        }
        int second_largeset = -1;

        for(int i= 0; i<= n ; i++){
            if(arr[i] > second_largeset and arr[i] != large )
                second_largeset = arr[i];
        }
        return second_largeset;

     }
     */

// we can simplytry to iterate over the array and keep track of the the largest and second largest 
    int largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }

    return second_largest;
}   

int main()
{
    int arr[5] = {4, 8, 8, 6, 5};
    cout << second_largest(arr, 5);
    return 0;
}