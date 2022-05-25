#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while (t--){
        int len;
        int arr[len];
        for(int i = 0; i< len; i++){
            int num;
            cin>>num;
            arr[i] = num;
        }
        int count = 0;
        while(len--){
            int i = 0 , j= i+1;
            if(arr[i] % 2 != 0 and arr[j] % 2 != 0 ){
                int sum = arr[i] + arr[j];
                arr[len] = sum;
                count++;
            }
        }
        cout<< count<< endl;
    }
    return 0;
}