#include <bits/stdc++.h>
using namespace std;

string unique(string s)
{
    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[95 - 'a' ]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout<< hash[i] << " "; 
    }
    
    cout<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (hash[i] > 1)
            return "YES";
    }

    return "NO";
}
    int main()
    {
        string s = "adity";

        cout << unique(s)<<endl;
        return 0;
    }