#include<bits/stdc++.h>
using namespace std; 

#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define pob pop_back
#define MP make_pair
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin>>T;
while(T--)
{
    ll n , x , y;
    cin>>n >>x>>y;
    vi items;
    ll original_cost = 0;
    FOR(i , n){
        ll item;
        cin >>item;
        original_cost = original_cost + item;
        items.pb(item);
    }
 ll doscount_price = 0;
 FOR(i , n){
    ll p = items[i] - y;
    if(p >=1){
        doscount_price = doscount_price+ p;
    }
 }
 ll total_cost = x + doscount_price;
 if(total_cost < original_cost ){
     cout<<"coupon"<<endl;
 }
 else{
     cout<<"No coupon"<<endl;
 }

}
    return 0;
}