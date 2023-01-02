#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int lengthOfLastWord(string s)
{
    int len = 0, tail = s.length() - 1;
    while (tail >= 0 && s[tail] == ' ')
        tail--;
    while (tail >= 0 && s[tail] != ' ')
    {
        len++;
        tail--;
    }
    return len;
}

int main()
{

    return 0;
}