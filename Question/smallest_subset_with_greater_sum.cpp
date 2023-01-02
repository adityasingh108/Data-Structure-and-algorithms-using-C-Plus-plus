#include <bits/stdc++.h>
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

int subsetsum(vector<int> arr, int n)
{
    long sum=accumulate(arr.begin(), arr.end(), 0L);
        sort(arr.begin(), arr.end(), greater<int> ());
        long sum1=0;
        for(int i=0; i<n; i++){
            sum1+=arr[i];
            sum-=arr[i];
            if(sum1> sum){
                return i+1;
            }
        }
        return -1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vi arr(n);
        FOR(i, n)
        {
            cin >> arr[i];
        }
        cout << subsetsum(arr, n) << endl;
    }
    return 0;
}