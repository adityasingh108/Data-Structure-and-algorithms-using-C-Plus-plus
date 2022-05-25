#include <bits/stdc++.h>
using namespace std;

int fib_recursion(int n)
{

    if (n <= 1)
        return n;
    else
        return fib_recursion(n - 2) + fib_recursion(n - 1);
}

int fib_iterative(int n)
{
    int t0 = 0, t1 = 1, s = 0, i;
    if (n <= 1)
        return n;

    for (i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int F[10];

int fib_memo(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fib_memo(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fib_memo(n - 1);

        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        F[i] = -1;
    }

    cout << fib_recursion(6) << endl;
    cout << fib_iterative(6) << endl;
    cout << fib_memo(6) << endl;
    return 0;
}