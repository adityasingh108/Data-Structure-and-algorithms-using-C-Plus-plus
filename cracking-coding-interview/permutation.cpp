#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void permutate(string s, int l, int r)
{
    int static count = 0;

    if (l == r)
    {
        cout << s << endl;

        cout << count << endl;
    }

    for (int i = l; i <= r; i++)
    {
        // swap the left most and the right most
        swap(s[i], s[r]);
        // called the permutated
        permutate(s, l + 1, r);
        count++;

        // backtrack the string with the help of swap the left most and the right most element
        swap(s[r], s[i]);
    }
}

int main()
{
    string s = "adi";
    permutate(s, 0, 5);

    return 0;
}