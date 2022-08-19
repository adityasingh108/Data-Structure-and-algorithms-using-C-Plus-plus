#include <bits/stdc++.h>
using namespace std;



int longest_subary(vector<int> arr, int k)
{
    int size = arr.size();
    int curSumm = 0;
    int maxLen = 0;
   

   // create a hash table 
   unordered_map<int , int> hash_table;


    for (int i = 0; i< arr.size() ; i++)
    {
        curSumm += arr[i];
        if(curSumm == k )
            maxLen += i;

        //check whether sum is present in the hash table or not 
        if(hash_table.find(curSumm) == hash_table .end())
            hash_table[curSumm] = i; 

        if(hash_table.find(curSumm-k)!= hash_table.end())  
        {
            // update the maxLen 
            if(maxLen < ( i - hash_table[curSumm- k]))
                maxLen = i - hash_table[curSumm-k];
        }     

    } 
    return maxLen;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }
        int k;
        cin >> k;

        cout << longest_subary(v, k) << endl;
    }
    return 0;
}