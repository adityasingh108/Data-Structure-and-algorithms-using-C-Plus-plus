#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int array1[n];
        int array2[n];
        for(int i = 0; i<n; i++){
            int nums;
            cin>>nums;
            array1[nums];
        }
        for(int i = 0; i<n; i++){
            int nums1;
            cin>>nums1;
            array2[nums1];
        }

        sort(array1 , array1 +n);
        sort(array2 , array2 +n);
        int sum = 0;
        for(int i = 0; i<n; i++){
            cout<< array1[i]<< " "<<endl;
        }
        // cout<<sum<<endl

    }
    
    return 0;
}