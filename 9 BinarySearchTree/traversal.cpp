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

vector<int> topView(Node *root)
    {
        // create a vector 
        vector<int> ans;
        
        if(root== nullptr)
            return ans;
        
        // create a map 
        
        map<int,int> topNode;
        
        //queue in which we stor the address of node and horzental value
        queue<pair<Node*,int> > q;
        q.push(make_pair(root,0));
        
        while(! q.empty()){
            pair<Node*,int> temp = q.front();
            q.pop();
            
            Node *frontNode = temp.first;
            
            int hd = temp.second;
            
            if(topNode.find(hd) == topNode.end())
                topNode[hd] = frontNode->data;
                
            if(frontNode->left)
                q.push(make_pair(frontNode->left,hd-1));
                
            if(frontNode->right)
                q.push(make_pair(frontNode->right,hd+1));    
                
            
        }
        
        for(auto i:topNode){
            ans.push_back(i.second);
        }
        return ans;
        
    }

vector<int> rightView(Node *root){
       vector<int> ans;
       
    //   create a queue and push the root in the queueu
    queue<Node* > q;
    q.push(root);
    
    while(!q.empty()){
        
        // count the number of the nodes in the  tree
        int n = q.size();
        
        // traverse from the last element 
        while(n--){
            
            Node *temp = q.front();
            q.pop();
            // if  n is last then push the element in the ans vector
            
            if(0 == n)
                ans.push_back(temp->data);
            
            if(temp->left )
                q.push(temp->left);
                
            if(temp->right )
                q.push(temp->right); 
            
                
            
        }
        
    }
    return ans;
}    

vector<int> leftView(Node *root){
    vector<int> ans;
    
    if(!root)
        return ans;
        
    // create queue ans push the root
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        // number of nodes in current level 
        int n = q.size();
        
        // traverse all the nodes in the level
        for(int i = 1; i<=n; i++){
            
            // creat a node that will store the front data
            Node * temp = q.front();
            q.pop();
            
            // print the data 
            if( i == 1)
                ans.push_back(temp->data);
                
            // if left root is not null push the node in the queue
            if(temp->left)
                q.push(temp->left);
                
            // if right root is not null push the node in the queue
            if(temp->right)
                q.push(temp->right);
           
        }
    }
  return ans;
}

vector<int> diagonal(Node *root)
{
     vector<int> ans;
     
     if(root == nullptr)
        return ans;
     
     // create a queue
     queue<Node*> q;
     q.push(root);
     
     while(! q.empty()){
         Node *temp = q.front();
         q.pop();
         
         while(temp){
             
             if(temp->left)
                q.push(temp->left);
            
            ans.push_back(temp->data);   
            temp = temp->right;
         }
         
         
     }
     return ans;
}