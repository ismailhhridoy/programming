#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode *binary_tree_input()
{
    int val;
    cin >> val;

    TreeNode *root;
    if (val == -1)
        root = NULL;
    else
        root = new TreeNode(val);

    queue<TreeNode *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        TreeNode *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l == -1)
            parent->left = NULL;
        else
            parent->left = new TreeNode(l);
        if (r == -1)
            parent->right = NULL;
        else
            parent->right = new TreeNode(r);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }

    return root;
}
void traversal_left(TreeNode* root)
{
    if (root == NULL)
    {
        return;
    }    

    if(root->left)
    {
        traversal_left(root->left);
        cout << root->val <<" "; 
    }
    else
    {
        traversal_left(root->right);
        cout << root->val <<" "; 
    }   
        
}

void traversal_right(TreeNode* root)
{
    if (root == NULL)
    {
        return;
    }

    if(root->right)
    {
        cout << root->val <<" "; 
        traversal_right(root->right);
    }
    else
    {
        cout << root->val <<" "; 
        traversal_right(root->left);
    }    

}
int main()
{
    TreeNode *root = binary_tree_input();
    traversal_left(root->left);
    cout<<root->val<<" ";
    traversal_right(root->right);
    return 0;
}