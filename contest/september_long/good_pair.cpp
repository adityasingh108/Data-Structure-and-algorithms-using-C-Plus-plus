#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases_of_codeChef;
    cin >> test_cases_of_codeChef;
    while (test_cases_of_codeChef--)
    {

        int n;
        cin >> n;
        long long int a[n];
        unordered_map<long long int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        long long int count_of_good_pair = 0;

        for (auto it : m)
        {
            long long int k = it.second;
            if (k >= 2)
            {
                k--;
                long long int f = ((k) * (k + 1)) / 2;
                count_of_good_pair = count_of_good_pair + f;
            }
        }

        cout << count_of_good_pair << endl;
    }
    return 0;
}