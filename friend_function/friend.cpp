#include <iostream>
using namespace std;
class stankFirst
{
public:
    stankFirst()
    {
        stankVar = 0;
    }

private:
    int stankVar;
    friend void stankFriend(stankFirst &sfo);
};

void stankFriend(stankFirst &sfo)
{
    sfo.stankVar = 99;
    cout << sfo.stankVar << endl;
}

int main()
{
    stankFirst obj;
    stankFriend(obj);
}