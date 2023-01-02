#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcasese;
    cin >> testcasese;
    while (testcasese--)
    {
        float a, x, b, y;
        cin >> a >> x >> b >> y;
        float alice_time = a / x;
        float bob_time = b / y;

        cout << alice_time << " " << bob_time << endl;

        if (alice_time > bob_time)
            std::cout << "Alice" << std::endl;

        else if (bob_time == alice_time)
            cout << "Equal" << endl;
        else if (alice_time < bob_time)
            cout << "Bob" << endl;
    }
    return 0;
}
