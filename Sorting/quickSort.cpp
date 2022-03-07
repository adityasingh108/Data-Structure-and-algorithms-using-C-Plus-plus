#include<bits/stdc++.h>
using namespace std; 


/* 
not stable 

Not adaptive

*/ 


void swap(int *x , int *y){
    int temp =*x;
    *x= *y;
    *y = temp;

}
/*
int partition(int arr[],int l ,int h){
    int pivot = arr[l];
    int i = l, j = h;

    do
    {
        do{i++;}while(arr[i] <= pivot);
        do{j--;}while(arr[j] > pivot);

        if(i>j)
            swap(&arr[i] , &arr[j]);
    }while(i<j);

    swap(&arr[l] , &arr[j]);
    return j;
}
*/


int partition(int arr[],int low, int high){
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}


void quickSort(int arr[] , int low , int high){
     if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


int main()
{
    int arr[] = {8, 3, 7, 9, 6, 5, 3, 5, 6, 9, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr,0 ,n-1);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

 
    
    return 0;
}