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

int max_depth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1; // 1 for root node count
}

void level_nodes(TreeNode *root, int x, int mx_d)
{
    if (root == NULL || x < 0 || x >= mx_d)
    {
        cout << "Invalid\n";
        return;
    }

    queue<pair<TreeNode *, int>> q;

    q.push({root, 0});

    while (!q.empty())
    {

        pair<TreeNode *, int> p = q.front();
        q.pop();
        TreeNode *node = p.first;
        int level = p.second;

        if (level == x)
        {
            cout << node->val << " ";
        }

        if (node->left != NULL)
            q.push({node->left, level + 1});

        if (node->right != NULL)
            q.push({node->right, level + 1});
    }
}

int main()
{
    TreeNode *root = binary_tree_input();
    int x;
    cin >> x;
    int mx_d = max_depth(root);
    level_nodes(root, x, mx_d);
    return 0;
}