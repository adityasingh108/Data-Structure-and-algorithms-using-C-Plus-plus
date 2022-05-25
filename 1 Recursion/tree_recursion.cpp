#include<bits/stdc++.h>
using namespace std; 

void treeRecursion(int n){
    if (n>0){
        cout<<n<<" ";
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}

int main()
{
    int a =3;
    treeRecursion(a);
    return 0;
}