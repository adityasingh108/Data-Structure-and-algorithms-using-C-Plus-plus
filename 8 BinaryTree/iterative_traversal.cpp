#include<bits/stdc++.h>
using namespace std; 

class Node{
    public:
        Node *left;
        int data;
        Node *right;
    Node(int d){
        this->left = NULL;
        this->data = d;
        this->right = NULL;
    }     
};


void preOrder(Node* root){
    // create a stack to store the adress of the node
    stack<Node *> st;
    while (!st.empty() || root){
        
        if(root != nullptr){
            cout<<root->data<<" ";
            st.push(root);
            root = root->left;
        }
        else{
            root = st.top();
            st.pop();
            root = root->right;
        }
    }
}


void inOrder(Node* root){
    // create a stack to store the adress of the node
    stack<Node *> st;
    while (!st.empty() || root){
        
        if(root != nullptr){
            st.push(root);
            root = root->left;
        }
        else{
            root = st.top();
            st.pop();
            cout<<root->data<<" ";
            root = root->right;
        }
    }
}

vector<int>  postOrder(Node *root){

    /// create a vector to store the ans 
    vector<int>ans;
    stack<Node*> st;
        st.push(root);
        while(st.size()){ 
            Node* curr = st.top();
            st.pop();
            ans.push_back(curr->data);

            if(curr->left)
                st.push(curr->left);

            if(curr->right)
            st.push(curr->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
}