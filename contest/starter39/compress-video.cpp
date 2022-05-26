#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

int main()
{
int T;
cin>>T;
while(T--)
{
    int n ;
    cin >>n;
    vector<int>vt;
    for (int  i = 0; i < n; i++)
    {
        ll frame;
        cin>>frame;
        vt.push_back(frame);
    }
    ll ans = 1;
    for(int i = 1; i<vt.size(); i++){
        if(vt[i] != vt[i-1]) ans++;
    }
    cout << ans<< endl;


}
    return 0;
}