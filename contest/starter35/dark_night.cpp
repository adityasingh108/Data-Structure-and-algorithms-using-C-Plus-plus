#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if(k == 0){
            if(n % 4 == 0){
                cout <<"Off"<<endl;
            }else{cout <<"On"<< endl;}
        }
        else if(k == 1 && n  == 0 ){
            cout <<"On"<< endl;
            }
        else if(k == 1 && n% 4 == 0 ){
            cout << "On"<< endl;
            }
        else 
            cout << "Ambiguous"<< endl;
        
    }

    return 0;
}