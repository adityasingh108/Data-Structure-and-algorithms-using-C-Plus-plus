#include<bits/stdc++.h>
using namespace std; 


/* 
not stable 

Not adaptive

it gives  Kth smallest element in one passs

*/ 


void swap(int *x , int *y){
    int temp =*x;
    *x= *y;
    *y = temp;

}

void selectionSort(int arr[] , int n){
    int i , j , k;

    for(i = 0; i<n-1; i++){
        for(j=k = i; j<n; j++){

            if(arr[j] < arr[k])  // it gives the increasing order 
            // if(arr[j] > arr[k])  // it gives the decresing orer order 
                k=j;
        }
        swap(&arr[i], &arr[k]);
    }
}
int main()
{
    int arr[] = {8, 3, 7, 9, 6, 5, 3, 5, 6, 9, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
    
    return 0;
}