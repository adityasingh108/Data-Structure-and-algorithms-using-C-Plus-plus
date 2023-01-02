#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool detectCapitalUse(string word)
{
    for (int i = 1; i < word.size(); i++)
        cout << word[i] << "  ";

    for (int i = 1; i < word.size(); i++)
    {

        if ( (isupper(word[1]) != isupper(word[i] ) || islower(word[0]) && isupper(word[i])))
            return false; 
    }

    return true;
}

int main()
{
    string word = "USA";
    cout << detectCapitalUse(word) << endl;
    return 0;
}