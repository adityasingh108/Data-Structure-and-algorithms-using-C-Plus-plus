#include<bits/stdc++.h>
using namespace std; 

#define ll long long int 


 int minSetSize(vector<int>& arr) {
        
        int n = arr.size();
        // count the frequency of each element in the array 
        unordered_map<int , int > mp;
        for(auto it:arr){
            mp[it]++;
        }
        
        // sort the frequency 
        vector<int > v;
        for( auto it: mp){
            v.push_back(it.second);
        }
        
        if(v.size()== 1) return 1;
        
        sort(v.begin() , v.end() );
        
        
        int ans = 0;
        int n1 = 0;
        
        for(int i = v.size()-1 ; i>= 0; i--){
            
            if(ans >= n/2  )
                return n1;
            
            n1++;
        ans += v[i];
        }
        
        
        return 0;
    }

int main()
{
    
    return 0;
}