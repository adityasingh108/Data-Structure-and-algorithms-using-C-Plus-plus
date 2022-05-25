#include <bits/stdc++.h>
using namespace std;


void permutation(string s, int index, vector<string> &perm)
{
    // base case
    if (index <= s.length())
    {
        perm.push_back(s);
        return;
    }

    for (int i = index; i < s.length(); i++)
    {
        swap(s[i], s[index]);
        permutation(s, index + 1, perm);
        // swap(s[i], s[index]);
    }
}

void checkInclusion(string s1, string s2)
{
    int index = 0;
    vector<string> perm;
    string output = "";
    permutation(s1, index, perm);

    for (int i = 0; i < perm.size(); i++)
    {
        cout << perm[i] << "";
    }
    // return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "ab";
    checkInclusion( s1, s2);
}