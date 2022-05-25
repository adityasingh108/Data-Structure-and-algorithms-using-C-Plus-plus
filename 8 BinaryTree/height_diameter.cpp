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


int height(Node *root){
    // base case 
    if(root==NULL)
        return 0;

    int op1 = height(root->left);
    int op2 = height(root->right);

    return op1+op2+1;    
}

int diameter(Node *root){
    // base case 
    if(root==NULL)
        return 0;
    int op1 = diameter(root->left);    
    int op2 = diameter(root->right);

    int op3 = height(root->left) + height(root->right) +1;

    int ans = max(op1,max(op2,op3));
}
