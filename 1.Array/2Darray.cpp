#include<bits/stdc++.h>
using namespace std; 

int main()
{
    // creating a two dimensional array in the stack

    int A[3][4] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};
     
     // 2 nd  creating two dimesonal array in the heap

    int *B[3];
    B[0] = new int [4];
    B[1] = new int [4];
    B[2] = new int [4];
    B[3] = new int [4];

    // 3 rd method using double pointer

    int **C;
    C[0] = new int [4];
    C[1] = new int [4];
    C[2] = new int [4];
    C[3] = new int [4];


    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 4; j++)
        {
            cout<< C[i][j] << " ";
        }
        cout<<endl;
    }
    
    return 0;
}