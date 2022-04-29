#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t;
    cin>>t;
    while (t--){
        int len;
        cin>>len;
        string s;
        cin>>s;
        if(len == 0){
            cout << 0<<endl;
        }
        int count = 0;
        while(len--){
            int i = 0; 
            int j = i+1;
           
             if(s[i] != s[j]){
                s[i] = s[j] = 0;
                count++;
            }
            i++;j++;
        }
        cout << count<<endl;
    }
    return 0;
}