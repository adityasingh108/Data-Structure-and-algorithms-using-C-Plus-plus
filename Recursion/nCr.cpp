#include<bits/stdc++.h>
using namespace std;

int fact(int n ){
    if(n==0)
        return 1;
    return fact(n-1)*n;    

}

int nCr(int n , int r){
    int num, den;

    num = fact(n);
    den = fact(r) * fact(n-r);

    return num/den;
}

int NcR(int n , int r){
    
    if(n==r || r==0)
        return 1;
    return NcR(n-1,r-1) + NcR(n-1,r);   
}

int main()
{
    

    cout<<nCr(5,2)<<endl;
    cout<<NcR(5,2)<<endl;
    return 0;
}