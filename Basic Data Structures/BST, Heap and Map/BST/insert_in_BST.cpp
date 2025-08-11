#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *binary_tree_input()
{
    int val;
    cin >> val; // keep it on root initially

    Node *root;
    if (val == -1)
        root = NULL; // if first value is -1, means there is no children
    else
        root = new Node(val); // we first push first value

    queue<Node *> q; // we use queue because it help us maintain levelorder

    if (root) // if we have root, means not null then we push to the queue.
        q.push(root);

    while (!q.empty())
    {
        // Get the front node from queue and remove it
        Node *p = q.front();
        q.pop();

        // we're taking input the child values
        int l, r;
        cin >> l >> r;

        // Then work with the node that we get, keeping the values to that node

        if (l == -1) // using -1 we can define if there any child nodes
            p->left = NULL;
        else
            p->left = new Node(l);

        if (r == -1)
            p->right = NULL;
        else
            p->right = new Node(r);

        // Then push children in the queque. After push they add on the queue. then from queue we get the node and we connect with child value with that node

        if (p->left != NULL)
            q.push(p->left);

        if (p->right != NULL)
            q.push(p->right);
    }

    return root;
}

void levelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q; // we use queue because it help us maintain levelorder
    q.push(root);    // we first push first value/root

    while (!q.empty())
    {

        // Get the front node from queue and remove it
        Node *p = q.front();
        q.pop();

        // Then work with the node that we get
        cout << p->val << " ";

        // Then push children in the queque
        if (p->left != NULL)
            q.push(p->left);

        if (p->right != NULL)
            q.push(p->right);
    }
}

void insert(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
    }
    else if (val < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(val);
        else
            insert(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(val);
        else
            insert(root->right, val);
    }
}

int main()
{
    Node *root = binary_tree_input();
    int val;
    cin >> val;
    insert(root, val);
    levelorder(root);
    return 0;
}