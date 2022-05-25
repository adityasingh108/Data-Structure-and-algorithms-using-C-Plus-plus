#include<bits/stdc++.h>
using namespace std; 


/* 
insertion sort is stable sort 

when the list is already sorted then the swapping is not done  ---- adaptive by nature -----

it doest gives the any result on one pass

Best for linked list

*/

void insertionSort(int arr[],int n ){

    for(int i = 1; i<n; i++){
        int j = i-1;
        int x = arr[i];
        while (j>=-1 && arr[j] >x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}


int main()
{
    int arr[] = {8, 3, 7, 9, 6, 5, 3, 5, 6, 9, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}