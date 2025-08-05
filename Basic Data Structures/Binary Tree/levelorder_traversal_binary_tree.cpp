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

    levelorder(root);

    return 0;
}