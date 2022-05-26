#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 

int main()
{
int T;
cin>>T;
while(T--)
{
    int n , a , b;
    cin>>n>> a>>b;
    int f = n-a;
    int k = f-b;
    cout<< f << " " <<k <<endl;

}
    return 0;
}