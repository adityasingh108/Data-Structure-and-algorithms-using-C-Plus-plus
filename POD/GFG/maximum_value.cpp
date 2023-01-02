#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

vector<int> maximum_value(Node *root)
{
    int maxi = INT_MIN;
    vector<int> ans;

    queue<Node *> q;
    q.push(root);

    Node *curr;

    while (!q.empty())
    {
        int syz = q.size();

        for (int i = 0; i < syz; i++)
        {
            curr = q.front();
            q.pop();
            maxi = max(curr->data, maxi);
            if (curr->left)
                q.push(curr->left);

            if (curr->right)
                q.push(curr->right);
        }
        ans.push_back(maxi);
        maxi = INT_MIN;
    }
}

int main()
{

    return 0;
}