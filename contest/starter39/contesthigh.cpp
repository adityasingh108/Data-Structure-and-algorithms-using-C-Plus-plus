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

#define all(a) (a).begin(), (a).end()

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
    ll n;
    cin>>n;
    vi a;
    FOR(i,n){
        ll num;
        cin>>num;
        a.pb(num);
    }
    sort(all(a));
    FOR(i,n){
        cout<<a[i]<< " ";
    }
}
    return 0;
}