#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

int main()
{
int T;
cin>>T;
while(T--)
{
    ll x  , y;
    cin>> x >>y;
    int sc = 0;
    while(x<y){
        x += 8;
        sc++;

    }
    cout << sc<<endl;


}
    return 0;
}