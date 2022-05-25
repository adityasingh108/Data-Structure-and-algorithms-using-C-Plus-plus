#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    // create a stack
    stack<char> st;

    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '(')
            st.push(x[i]);
        else if (x[i] == ')')
        {
            if (st.empty())
                 {return 0;}
            st.pop();
        }
    }
    if (st.empty())
        return 1;
    else
        return 0;
}

int main()

{
    string exp = "()(((()()()()()()())))";

    cout << ispar(exp) << endl;

    return 0;
}