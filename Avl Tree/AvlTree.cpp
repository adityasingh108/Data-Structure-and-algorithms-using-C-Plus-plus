#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        Node *left;
        int data;
        int height;
        Node *right;
}*root =NULL;

// function to update the height of the node
int NodeHeight(Node *p){
    int hl , hr;

    hl = p && p->left ? p->left->height:0;

    hr = p && p->right ? p->right->height:0;

    return hl >hr? hl+1:hr+1;

}

// function to ckeck balance factor of each node
int BalanceFactor(Node *p){
    int hl , hr;

    hl = p && p->left ? p->left->height:0;

    hr = p && p->right ? p->right->height:0;

    return hl-hr;
}

// function to LL rotation
Node * LLRotation(Node * p){

    Node *pl = p->left;
    Node *plr = pl->right;

    pl->right = p;
    p->left = plr;
    p->height = NodeHeight(p);
    pl->height =NodeHeight(pl);

    if(root == p)
        root = pl;
    return pl;

}

// function to Left right rotation
Node * LRRotation(Node * p){
    Node *pl= p->left;
    Node *plr = pl->right;

    pl->right = plr->left;
    p->left = plr->right;

    plr->left = pl;
    plr->right = p;

    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);

    if(root = p)
        root = plr;

    return plr;    


}

// function to right rightrotation
Node * RRRotation(Node * p){
   Node *x = p->left;
    Node *T2 = x->right;
 
    // Perform rotation
    x->right = p;
    p->left = T2;
 
    // Update heights
    p->height = NodeHeight(p);
    x->height = NodeHeight(x);
 
    // Return new root
    return x;
}

// function to right left rotation
Node * RLRotation(Node * p){
    return nullptr;
}

// insert the node in the AVL
Node *Rinsert(Node* root, int key){

    // if the root is null create a new node ans return it

    Node *temp;

    if(root == NULL){
        // create a new node
        temp = new Node;
        temp->data = key;
        temp->height = 1;
        temp->left = temp->right = NULL;
        return temp;
    }

    if(key < root->data)
        root->left = Rinsert(root->left,key);

    else if(key > root->data)
        root->right = Rinsert(root->right,key);

    root->height = NodeHeight(root);

    // check for LL rotation
    if(BalanceFactor(root) == 2 && BalanceFactor(root->left) == 1)
        return LLRotation(root);

    // check for LR rotaion
    if(BalanceFactor(root) == 2 && BalanceFactor(root->left) == -1)
        return LRRotation(root);

    // check for RR rotation
    if(BalanceFactor(root) == -2 && BalanceFactor(root->right) == -1)
        return RRRotation(root);

    // check for RL rotation
    if(BalanceFactor(root) == -2 && BalanceFactor(root->right) == 1)
        return RLRotation(root);

    return root;
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



int main()
{

    root = Rinsert(root,50);
    Rinsert(root,60);
    Rinsert(root,70);
    
    levelOrderTraverasl(root);

    return 0;
}