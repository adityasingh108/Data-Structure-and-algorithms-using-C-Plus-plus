#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        long long int neg = 0, zero = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                neg++;
            }
            else if (a[i] == 0)
            {
                zero++;
            }
            else
            {
                pos++;
            }
        }
        long long int ans = (pos * (pos - 1)) / 2 + (neg * (neg - 1)) / 2;
        cout << ans << endl;
    }
}
