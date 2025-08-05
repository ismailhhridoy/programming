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

TreeNode* binary_tree_input()
{
    int val;
    cin >> val;

    TreeNode* root;
    if(val == -1)
        root = NULL;
    else
        root = new TreeNode(val);

    queue<TreeNode*>q;
    if(root)
        q.push(root);

    while (!q.empty())
    {
        TreeNode* parent = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;

        if(l == -1)
            parent->left = NULL;
        else
            parent->left = new TreeNode(l);            
        if(r == -1)
            parent->right = NULL;
        else
            parent->right = new TreeNode(r);

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);
    }

    return root;
    
}

int sum_without_leaf(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int cnt = 0;

    queue<TreeNode *> q;
    q.push(root);

    while (!q.empty())
    {

        TreeNode *p = q.front();
        q.pop();

        if (p->left != NULL || p->right != NULL)
            cnt+= p->val;

        if (p->left != NULL)
            q.push(p->left);

        if (p->right != NULL)
            q.push(p->right);
    }

    return cnt;
}

int main()
{   
    TreeNode* root = binary_tree_input();
    cout << sum_without_leaf(root);
    return 0;
}