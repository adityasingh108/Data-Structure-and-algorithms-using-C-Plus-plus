#include<bits/stdc++.h>
using namespace std; 

string Solution(string s){
    int n = s.size();
        // if(n<k) return s;
        
        stack<pair<char,int>> stk;
        for(int i=0; i<n; ++i){
            if(stk.empty() || stk.top().first != s[i]) stk.push({s[i],1});
            else{
                auto prev = stk.top();
                stk.pop();
                stk.push({s[i], prev.second+1});
            }
            if(stk.top().second=='A' ) stk.pop();
        }
        
        string ans = "";
        while(!stk.empty()){
            auto cur = stk.top();
            stk.pop();
            while(cur.second--){
                ans.push_back(cur.first);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    
}

int main()
{   
    string s ; 
    cin>>s;

    cout<<Solution(s)<<endl;
    
    return 0;
}