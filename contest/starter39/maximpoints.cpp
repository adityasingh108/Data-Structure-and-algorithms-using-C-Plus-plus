#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

int main()
{
int T;
cin>>T;
while(T--)
{
    ll x , y;
    cin>>x>>y;
    // a->b
   ll ans1 =  (500- (x*2) )  + (1000 - (x+y) *4);
   // b->a
   ll ans2  =  (1000- (y*4) )  + (500    - (x+y) *2);
   cout<<max(ans1, ans2)<<endl;


}
    return 0;
}