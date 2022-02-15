#include<bits/stdc++.h>
using namespace std; 

int minSteps(string s, string t) {
        int sum = 0;
        int n = s.size();
        int m = t.size();
        int hash_table[26] = {};
        
        
        for(int i = 0; i<n; i++)
            hash_table[s[i] - 'a'] ++; 
        
        for(int i = 0; i<m; i++){
             
            if(hash_table[t[i] -'a'] >0)
                hash_table[t[i] -'a']--;
            else{sum++;}
        }
        return sum;
}

int main()
{
    string s1 = "bab";
    string s2 = "aba    ";

    cout<<minSteps(s1,s2)<<endl;
    return 0;
}