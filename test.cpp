#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

int fun(int n )
{
    static int res = 0;
    if(n>0){
        res  = res +1;
        fun(n/20);

    }
    return res;
        

}
int main()
{
    cout<< fun(100);
    return 0;
}