#include<bits/stdc++.h>
using namespace std; 

void insert(int arr[] ,int n){
    int i = n,temp;

    temp = arr[i];

    while(i>1 &&  temp > arr[i/2]){
        arr[i] = arr[i/2];
        i = i/2;  
    }
    arr[i] = temp;
}

int Delete(int arr[] ,int n){

    int i,j,x,temp ,val;
    
    val = arr[1];
    x= arr[n];
    arr[1] = arr[n];

    arr[n]=val;
    i = 1;
    j= i*2;

    while(j<n-1){
        if(arr[j+1] > arr[j] )
            j = j+1;
        if(arr[i] < arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i = j;
            j = 2*j;
        }    
        else
            break;
    }
    return val;

}

int main()
{
    int Arr[] = {0,10,20,30,40,50,60,70,80,90,100};

    int heap[] = {0,10,20,30,25,5,40,35};
     

    int i;
    for(i = 2; i<=7; i++){
        insert(heap, i);
    }

    cout<<endl;

    for (int i = 7; i >1; i--)
    {
        cout<<"deleted value is :"<<Delete(heap,i)<<endl;
    }
    
    for(int i = 1 ; i<=7;i++){
        cout << heap[i]<<" ";
    }
    return 0;
}