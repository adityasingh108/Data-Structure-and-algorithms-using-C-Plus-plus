#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll one(0), two(0);
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
                one++;
            if (a[i] == 2)
                two++;
        }
        ll ans = one * (n - one);
        if (one > 1)
        {
            ans += (one * (one - 1)) / 2;
        }
        if (two > 1)
        {
            ans += (two * (two - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
