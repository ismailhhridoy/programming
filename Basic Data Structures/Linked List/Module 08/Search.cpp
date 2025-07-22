#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;

        return;
    } 
        
    tail->next = newnode;
    tail = newnode;

}

void print_linked_list(Node *head, int x)
{
    Node *temp = head;

    int pos = 0;

    while (temp != NULL)
    {

        if (temp->val == x)
        {

            cout << pos << endl;
            return;
        }

        temp = temp->next;

        pos++;
    }

    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    int val;

    while (t--)
    {

        Node *head = NULL;
        Node *tail = NULL;

        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;

        print_linked_list(head, x);
    }

    return 0;
}