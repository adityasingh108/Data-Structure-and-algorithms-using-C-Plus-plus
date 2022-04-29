#include<bits/stdc++.h>
using namespace std; 

int main()
{   
    vector<int> nums;
    for(int i = 1; i<3; i++){nums[i] = 1;}
    unordered_map<int , int> map;
    for(auto it:nums){map[it]++;}

    cout<<map.<<endl;
    return 0;
}