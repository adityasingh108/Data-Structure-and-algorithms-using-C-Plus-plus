#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 
// #define mod 1e9+7

int main()
{
int T;
cin>>T;
while(T--)
{
    ll n;
    cin>> n;
    string str;
    cin>>str;
    ll ans = 1;
    for(int i = 0; i<n; i++){
        if(str[i] == 'c' || str[i] == 'g' || str[i] == 'l' || str[i] == 'r')
        {
            ans *= 2;
            ans %= 1000000000+7;
        }
    }
    cout<<ans<<endl;

}
    return 0;
}