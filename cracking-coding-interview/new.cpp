#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

int main()
{   
    int n;
    cin >> n;
    vector<int> v(n);
    for (int  i  = 0; i< n; i++){
        cin >> v[i];
    }
    priority_queue<int> pq;
    pq.push(v[0]);
    int cnt = 1;
    for (int i = 0; i<n ; i++){
        if(v[i] > pq.top()){
            pq.push(v[i]);
            cnt++;
        }
    }
    cout<<cnt<<endl;


    
    return 0;
}