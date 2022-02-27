#include<bits/stdc++.h>
using namespace std; 

class TreeNode{
    public:
        TreeNode *left;
        int val;
        TreeNode *right;
};

vector<int> rightSideView(TreeNode* root) {
        
        // create a vector to store the answer
        vector<int> ans;
        
        // the root is null
        if(root== nullptr)
            return ans;
            
         // create a queue ans push the root 
         
        queue<TreeNode *> q;
        q.push(root);
        
        while(!q.empty()){
            //count the numner of nodes in the level
            int n = q.size();
            
            // traverse the level 
            while(n--){
                
                TreeNode *temp = q.front();
                q.pop();
                
                // if the last node then stor the last value
                if(0 == n)
                    ans.push_back(temp->val);
                
                // if the left value is not null 
                
                if(temp->left)
                    q.push(temp->left);
                
                // if the right child is not null
                
                if(temp->right)
                    q.push(temp->right);
            }
            
        }
        return ans;
        
        
        
    }

int main()
{
    
    return 0;
}