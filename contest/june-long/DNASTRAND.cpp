#include <bits/stdc++.h>
using namespace std;

#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<char> vi;
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
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                s[i] = 'T';
            }
            else if (s[i] == 'T')
            {
                s[i] = 'A';
            }
            else if (s[i] == 'C')
            {
                s[i] = 'G';
            }
            else if (s[i] == 'G')
            {
                s[i] = 'C';
            }
        }
        cout << s << endl;
    }
    return 0;
}