#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long police, thif;
        cin >> police >> thif;
        int sped = abs( thif - police);
        cout<< sped<< endl;
        
    }

    return 0;
}