#include<bits/stdc++.h>
using namespace std; 

class Node{
    public:
        Node *left;
        int data;
        Node *right;
};


vector<int> zigZagTraversal(Node *root){
        vector<int> result;
        if(root == NULL)
            return result;

        queue<Node*> q;
        q.push(root);

        bool  leftToRight =true;

        while(! q.empty()){
            int size = q.size();

            vector<int> ans(size);

            //level process 
            for (int i = 0; i < size; i++)
            {
                Node *frontNode = q.front();

                q.pop();
                // normal insert or messege insert
                int index = leftToRight ? i:size -i-1;

                ans[index] = frontNode->data;

                if(frontNode ->left)
                    q.push(frontNode->left);

                if(frontNode ->right)
                    q.push(frontNode->right);    
            }
            // direction change 
            leftToRight = ! leftToRight;

            for(auto i:ans){
                result.push_back(i);
            }

        }
        return result;

    }


void traverseLeft(Node* root, vector<int> &ans) {
        //base case
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
            return ;
            
        ans.push_back(root->data);
        if(root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
            
    }
    
void traverseLeaf(Node* root, vector<int> &ans) {
        //base case
        if(root == NULL)
            return ;
            
        if(root->left == NULL && root->right == NULL) {
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        
    }
    
void traverseRight(Node* root, vector<int> &ans) {
        //base case
        if( (root == NULL) || (root->left == NULL && root->right == NULL) )
            return ;
        
        if(root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);
            
        //wapas aagye
        ans.push_back(root->data);
            
    }
    
vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
            
        ans.push_back(root->data);
        
        //left part print/store
        traverseLeft(root->left, ans);
        
        //traverse Leaf Nodes
        
        //left subtree
        traverseLeaf(root->left, ans);
        //right subtree
        traverseLeaf(root->right, ans);
        
        //traverse right part
        traverseRight(root->right, ans);
        
        return ans;
        
        
    }

vector<int> verticalOrder(Node *root)
    {
        // create a mappping
        map<int,map<int,vector<int> > > nodes;
        
        // create a queuue 
        queue< pair<Node* ,pair<int,int> > > q;
        
        // to store the answer
        
        vector<int> ans;
        
        // push the apir int the queue
        
        q.push(make_pair(root,make_pair(0,0)));
        
        // traverssing
        
        while(!q.empty()){
           pair<Node* ,pair<int,int> > temp = q.front();
           q.pop();
           Node * frontNode = temp.first;
           
           int hd= temp.second.first;
           int lv = temp.second.second;
           
           nodes[hd][lv].push_back(frontNode->data);
           
           
           if(frontNode->left)
                q.push(make_pair(frontNode->left,make_pair(hd-1,lv +1 )));
                
                
             if(frontNode->right)
                q.push(make_pair(frontNode->right,make_pair(hd+1,lv +1)));    
        }
        
        for(auto i:nodes){
            for(auto j:i.second){
               for(auto k:j.second){
                ans.push_back(k);
            } 
            }
        }
            
        return ans;    
        
    }


