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
void postorder(Node* root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left); // left
    postorder(root->right); // right    
    cout << root->val <<" ";  // root
    
}
int main()
{
    Node *root = new Node(1);
    Node *a = new Node(7);
    Node *b = new Node(9);
    Node *c = new Node(2);
    Node *d = new Node(6);
    Node *e = new Node(5);
    Node *f = new Node(11);
    Node *g = new Node(9);
    Node *h = new Node(5);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = g;
    g->right = h;
    d->left = e;
    d->right = f;

    postorder(root);

    return 0;
}