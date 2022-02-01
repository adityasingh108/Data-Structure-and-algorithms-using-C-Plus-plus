#include <iostream>
using namespace std;

int printArray(int arr[], int sizeOfArr)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 6, 7, 6, 3, 5, 7};
    cout << printArray(arr, 10) << endl;
    // return 0;
}