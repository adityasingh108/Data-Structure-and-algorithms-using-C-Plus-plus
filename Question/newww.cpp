#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 


// write the function to print the subaary with the given sum

int subaary_sum(int sum , vector<int >arr){
    int n = arr.size();
    int i = 0;
    int j = 0;
    int curr_sum = 0;
    while(j<n && curr_sum + arr[j] <= sum){
        curr_sum += arr[j];
        j++;
    }
    if(curr_sum == sum){
        cout << i+1 << " " << j << endl;
        return 1;
    }
    while(j<n){
        curr_sum += arr[j];
        while(curr_sum > sum){
            curr_sum -= arr[i];
            i++;
        }
        if(curr_sum == sum){
            cout << i+1 << " " << j+1 << endl;
            return 1;
        }
        j++;
    }
    cout << -1 << endl;
    return 0;
}

int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    }
    
    return 0;
}