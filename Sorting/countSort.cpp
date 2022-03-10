#include<iostream>
using namespace std;


int maxOfarray(int arr[] , int n){
    int max_element = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]> max_element)
            max_element = arr[i];
    }
    return max_element;
}


void countSort(int arr[], int n){
    int max ,i,j;
    int *temp_array;
    max = maxOfarray(arr,n);
    temp_array = new int[max+1];

    // temp array initialize with zero
    for(i= 0; i< max+1; i++)
        temp_array[i] =0;


    // increment the index of the element in the array 
    for(i = 0; i<n; i++)
        temp_array[arr[i]]++; 

    // clear the main array and copy the element in the arr from temparray 

    i = 0; j = 0;
    while(j<max+1){
        if(temp_array[j] >0){
            arr[i++] = j;
            temp_array[j]--;    
        }
            
        else
            j++;    
    }       
}


int main(){
    int arr[] = {5,9,3,6,2,7,5,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    countSort(arr , n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
