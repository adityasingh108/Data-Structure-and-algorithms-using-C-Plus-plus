#include<bits/stdc++.h>
using namespace std; 


void findDuplicates(vector<int> &nums) {
        
        vector<int> has_table(10,0);
        vector<int> ans;
        
        for(int i = 0; i<nums.size(); i++){
            has_table[nums[i]]++;
        }
        
        for(int i =0; i <=has_table.size(); i++)
        {
            if (has_table[i] == 2)
                ans.push_back(i);
        }


        for(auto j :ans){
            cout<<j<<" ";
        }

    }

int main()
{
    vector<int> arr{1,1,2};

    

    findDuplicates(arr);


  
    return 0;
}

