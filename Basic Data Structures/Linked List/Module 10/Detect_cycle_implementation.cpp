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

int main()
{
    // Node *head = NULL;
    Node *head = new Node(10);
    Node *a = new Node(15);
    Node *b = new Node(15);
    Node *c = new Node(15);
    Node *tail = new Node(20);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
    tail->next = b;

    Node *slow = head;
    Node *fast = head;

    bool is_detect = false;

    while (fast != NULL && fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            // cycle detected
            is_detect = true;
            break;
        }

    }

    if (is_detect)
    {
        cout << "Cycle Detected";
    }
    else
    {
        cout << "No cycle";
    }

    return 0;
}