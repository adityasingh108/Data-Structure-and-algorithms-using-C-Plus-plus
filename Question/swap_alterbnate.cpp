#include<bits/stdc++.h>
using namespace std; 

void swap_alternate(int arr[],int size)
{
    for(int i =0; i<size; i+=2 )
    {
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }

    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }cout << endl;
    
}

int main()
{
    int even [8] = {5,2,9,4,7,6,1,0};
    int odd [5] ={11, 33, 9, 76, 43};
    

    swap_alternate(even,8);
    swap_alternate(odd,5);


    return 0;
}