#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while (t--){
        int l , r;
        cin>> l >> r;
        int ans = 0;
        for(int i = l; i<=r; i++){
            
            int last = i %10; 
            if(last  == 2  || last == 3 || last == 9 ){
                ans++;   
            }
           
        }
        cout<<ans << endl;
    }
    return 0;
}    