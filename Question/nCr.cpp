#include<bits/stdc++.h>
using namespace std; 

int fact(int n){
        int fct = 1;
        for(int i = 1; i<=n; i++){
            fct = fct *i;
        }
        return fct;
    }
    int nCr(int n, int r){
        int num = fact(n);
        int den = fact(n) * fact(n-r);
        int ans = num/den;
        return ans;
    }
    
int main()
{
    int n = 3;
    int r = 2;
    cout<<nCr(n,r)<<endl;
    cout<<fact(5);
    return 0;
}