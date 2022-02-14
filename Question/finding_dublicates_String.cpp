#include <bits/stdc++.h>
using namespace std;

void dublicate(char a[])
{

    long int h = 0;
    int x = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {

        x = 1;
        x = x << a[i] - 97;

        if (x & h > 0)
            cout << "There is dublicate" << endl;
        else
        {
            h = x | h;
        }
    }
    // cout << "Not dublicate" << endl;
}

int main()
{
    char a[] = "finding";
    dublicate(a);
    return 0;
}