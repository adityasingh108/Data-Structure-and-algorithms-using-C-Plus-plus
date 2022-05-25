#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while (t--){
        int x , y, z;
        cin>> x >> y>>z;
        int time = y / x;
        int ans = z-time;
        if(ans <=0){
            cout <<  0<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    
    return 0;
}