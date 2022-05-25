#include<bits/stdc++.h>
using namespace std; 

class Node{
    public:
        Node *left;
        int data;
        Node *right;
};

// create a  recursive to search the key in the bst
Node * Rsearch(Node* root,int key){
    // base case 
    if(root ==nullptr)
        return root;
    if(key == root->data)
        return root;

    else if(key < root->data)
        Rsearch(root->left, key);

    else{
        return Rsearch(root->right, key);
    }

}

// create a  iterative  functionto search the key in the bst
Node * search(Node* root,int key){

    while(root != nullptr){

        if(key == root->data)
            return root;

        else if(key < root->data)
            root = root->left;

        else{
            root = root->right;
        }
    }
    return nullptr;
}

// insert a node in the binary  serach tree
Node * insert(Node* root,int key){

    //create a helper pointer to point the previos node
    Node * p = NULL;
    Node * prev = NULL;

    // if the root is null then create a node and return it
    if(root== nullptr){
             p = new Node;
             p->data = key;
             p->left = p->right = NULL;
             return p;
    }

    // check the key in bst if present then return root else create  a node ans return it
    while(root != nullptr){
        // store the previos node in  prev node
        prev = root;
        if(key == root->data)
            return root;

        else if(key < root->data)
            root = root->left;

        else{
            root = root->right;
        }      
    }
    // craete a new node and insert the value 

    p = new Node;
    p->data= key;
    p->left = p->right = NULL;

    // check a new node is greater or smaller 
    if(p->data < prev->data)
        prev->left = p;
    prev->right = p;
        
}

// recursive insertion function

Node *Rinsert(Node* root, int key){

    // if the root is null create a new node ans return it
     
    Node *temp;

    if(root == NULL){
        // create a new node
        temp = new Node;
        temp->data = key;
        temp->left = temp->right = NULL;
        return temp;
    }

    if(key < root->data)
        root->left = Rinsert(root->left,key); 

    else if(key > root->data)
        root->right = Rinsert(root->right,key);  

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

void inOrder(Node *root){
    if(root == nullptr)
        return;
    inOrder(root->left);    
    cout<<root->data<<" ";
    inOrder(root->right);    
}

Node* minValueNode(Node* node)
{
    struct Node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}


Node * deleteNode(Node *root,int key){
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted is
    // smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted is
    // greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key, then This is the node
    // to be deleted
    else {
        // node has no child
        if (root->left==NULL and root->right==NULL)
            return NULL;
       
        // node with only one child or no child
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
 
        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node* temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->data = temp->data;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}



int main()
{
    Node *Bst = NULL;
    Node *temp  = nullptr;

    Bst = insert(Bst,20);
    Rinsert(Bst,10);
    insert(Bst,30);
    

    cout<<endl;

    temp = deleteNode(Bst, 20);

    if(temp == nullptr)
        cout<<"Element is not found";
    else{
        cout<<"Elment is Found";
    }    
    inOrder(Bst);
    return 0;
}