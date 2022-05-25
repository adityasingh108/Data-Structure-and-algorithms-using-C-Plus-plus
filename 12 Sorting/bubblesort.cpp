#include <iostream>
using namespace std;


/* 
Buuble sort is stable sort 

when the list is already sorted then the swapping is not done    ---- adaptive by performing operation  -----

it gives the kth largest element result on one pass ----------Kth largest elemment------

Best for array
*/

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void Bubble(int A[], int n)
{
    int i, j, flag = 0;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(&A[j], &A[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

int main()
{
    int arr[] = {8, 3, 7, 9, 6, 5, 3, 5, 6, 9, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble(arr, n);

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}