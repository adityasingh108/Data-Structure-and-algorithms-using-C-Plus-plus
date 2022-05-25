#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N, X, temp1, ans;
        cin >> N >> X;
        long long A[N], i;
        for (i = 0; i < N; i++)
        {
            cin >> A[i];
            if (i == 0)
                temp1 = A[0];
            if (A[i] <= temp1)
                temp1 = A[i];
        }
        ans = X / temp1 + (X % temp1 != 0);
        cout << max(ans, N) << endl;
    }
    return 0;
}