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

int max_depth(TreeNode* root)
{
    if(root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    

    int l = max_depth(root->left);
    int r = max_depth(root->right);           
    return max(l,r)+1; // 1 for root node count

}

int count_nodes(TreeNode* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l+r+1; // 1 for root node count

}

int main()
{   
    TreeNode* root = binary_tree_input();
    int mx_d = (int)pow(2, max_depth(root)) - 1;
    int cnt = count_nodes(root);
    // cout << mx_d << " " << cnt;

    if(mx_d != cnt)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}