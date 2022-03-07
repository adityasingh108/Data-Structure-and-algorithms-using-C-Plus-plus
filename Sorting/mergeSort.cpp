#include <bits/stdc++.h>
using namespace std;

void merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    int B[100];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}

void RmergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        RmergeSort(arr, low, mid);
        RmergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void ImergeSort(int arr[], int n)
{
    int i, pass, low, mid, high;

    for (pass = 2; pass <= n; pass = pass * 2)
    {

        for (i = 0; i + pass - 1 <= n; i++)
        {
            low = i;
            high = i + pass - 1;
            mid = (low + high) / 2;
            merge(arr, low, mid, high);
        }
    }
    if (pass / 2 < n)
    {
        merge(arr, 0, pass / 2 - 1, n);
    }
}

int main()
{
    int A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3}, n = 10, i;
    RmergeSort(A,0, n);
    for (i = 0; i < 10; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}