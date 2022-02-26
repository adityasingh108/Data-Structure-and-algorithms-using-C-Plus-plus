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

Node *buildTree(Node *root){
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
  
    if(data == -1)
        return nullptr;

    cout<<"Enter Left Child value of "<<data<<endl;
    root->left = buildTree(root->right);

    cout<<"Enter right child value:"<<data<<endl;
    root->right  = buildTree(root->right); 

}
 
void levelOrderTraverasl(Node *root){
    queue<Node*> q;
    // enter the root inthe queue
    q.push(root); 
    // for seperator  
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(q.empty())
                q.push(NULL);
            }
            else{
                cout<<temp->data<<" ";
                if(temp->left){
                    q.push(root->left);
                }

                if(temp->right){
                    q.push(root->right);
                }
        }
    }


} 


void preOrder(Node *root){

    if(root){
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node *root){

    if(root){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}


void postOrder(Node *root){

    if(root){
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}



int main()
{
    // initialize tree
    Node *root = NULL;
    // reating a tree

    root = buildTree(root);

    cout<<"Level Order Traversal"<<endl;
    levelOrderTraverasl(root);
    cout<<endl;   

    cout<<"Pre Order Traversal"<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"In Order Traversal"<< endl;
    inOrder(root);
    cout<<endl;

    cout<<"Post Order Traversal"<<endl;
    postOrder(root);
    cout<<endl;



    return 0;
}