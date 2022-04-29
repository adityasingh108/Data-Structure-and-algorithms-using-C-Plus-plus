#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int N,X,P;
	   cin>>N>>X>>P;
        if(4*X-N>=P){
	       cout<<"PASS"<<endl;
	   }else{
	       cout<<"FAIL"<<endl;
	   }
    }
    return 0;
}