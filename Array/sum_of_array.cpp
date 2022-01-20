#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 6, 8, 2, 8};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    cout << "the sum of the array is " << sum << endl;
}