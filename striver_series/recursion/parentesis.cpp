#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int printsublimatin(int n)
{
    if (n <= 1)
        return 0;
    // cout << sum << "   " << n  <<endl;
    return n + printsublimatin(n - 1);
}

int main()
{
    int n;
    n == 3;
    cout << printsublimatin(5) << endl;

    return 0;
}