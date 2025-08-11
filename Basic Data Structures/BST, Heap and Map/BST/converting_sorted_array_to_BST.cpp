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

Node *convert(int a[], int n, int l, int r)
{
    if(l>r)
        return NULL;

    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);

    Node* left = convert(a,n,l,mid-1);
    Node* right = convert(a,n,mid+1,r);

    root->left = left;
    root->right = right;

    return root;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    } 

    Node *root = convert(a, n, 0, n - 1);
    levelorder(root);
    return 0;
}