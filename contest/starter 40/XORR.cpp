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


int solve(vi arr1 , vi arr2 , int n){
    ll pair = 0;

    FOR(i , n){
        FOR(j , n){
            if( arr1[i] ^ arr2[j] == arr1[j] ^ arr2[i] ){pair++;}
        }
    }
    return pair;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int T;
cin>>T;
while(T--)
{
   ll n ;
   cin>>n;
   vi aaray1; 
   vi aaray2;
   FOR(i , n) { 
       int item;
       cin>>item;
       aaray1.pb(item);
   }
   FOR(i , n) {
       int item;
       cin>>item;
       aaray2.pb(item);
   }

   cout<<  solve(aaray1 , aaray2, n )<<endl;
}
    return 0;
}