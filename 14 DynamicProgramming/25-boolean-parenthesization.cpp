#include<bits/stdc++.h>
using namespace std; 

map<string, int> mp;
class Solution{
public:
    
    
    int solve(string s, int i, int j, bool isTrue){
        if(i>j)
            return 0;
        if(i==j){
            if(isTrue==true)
                return s[i]=='T';
            else
                return s[i]=='F';
        }
        
        string temp=to_string(i);
        temp.push_back(' ');
        temp.append(to_string(j));
        temp.push_back(' ');
        temp.append(to_string(isTrue));
        
        if(mp.find(temp)!=mp.end())
            return mp[temp];
        int ans=0;
        for(int k=i+1;k<=j-1;k=k+2){
            int LT=solve(s, i, k-1, true);
            int LF=solve(s, i, k-1, false);
            int RT=solve(s, k+1, j, true);
            int RF=solve(s, k+1, j, false);
            
            if(s[k]=='&'){
                if(isTrue==true)
                    ans=ans+(LT*RT);
                else
                    ans=ans+(LF*RT)+(LT*RF)+(LF*RF);
            }
            
            else if(s[k]=='|'){
                if(isTrue==true)
                    ans = ans + (LT*RF)+(LF*RT)+(LT*RT);
                else
                    ans=ans+(LF*RF);
            }
            
            else if(s[k]=='^'){
                if(isTrue==true)
                    ans=ans+(LT*RF)+(LF*RT);
                else
                    ans=ans+(LT*RT)+(LF*RF);
            }
        }
        mp[temp]=ans%1003;
        return ans%1003;
    }
    int countWays(int N, string S){
        // code here
        int result=solve(S, 0, N-1,true);
        mp.clear();
        return result;
    }
};
