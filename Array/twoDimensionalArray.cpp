#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}