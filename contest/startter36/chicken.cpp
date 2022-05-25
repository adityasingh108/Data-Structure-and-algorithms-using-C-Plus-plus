#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int  t;
    cin >> t;
    while(t--){
        int  n  , m , o;
        cin >> n >> m >> o;
        if(o %n == 0 and o% m == 0 ){
            cout <<  "ANY" <<endl;
        }
        else if(o %n != 0 and o% m != 0 ){
            cout << "NONE"<<endl;
        }
        else if ( o % n == 0 ){
            cout << "CHICKEN"<<endl;
        }
        else if ( o % m  == 0 ){
            cout << "DUCK"<<endl;
        }
    }
    
    return 0;
}   