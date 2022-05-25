#include <iostream>
using namespace std;

int main()
{
    int age =19;
    switch (age)
    {
    case 12:
        cout << "case no 12" << endl;
        break;
    case 14:
        cout << "you are not eligble for voting" << endl;
        break;
    case 19:
        cout << "You are elible for voting" << endl;
        break;
    default:
        cout << "no  case is valid";
    }
}