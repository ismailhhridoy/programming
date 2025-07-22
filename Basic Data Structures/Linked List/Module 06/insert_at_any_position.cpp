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

void insert_at_any_pos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newnode = new Node(val); // Create new node with given value

    if (pos == 0) // inserting at head 1 time
    {
        
        newnode->next = head;
        head = newnode;

        // If list was empty, update tail too
        if (tail == NULL)
        {
            tail = newnode;
        }

        return;
    }

    Node *temp = head;
    
    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL)
        {
            // Invalid position: beyond list size
            delete newnode;
            return;
        }

        temp = temp->next;
    }
    
    // Insert the new node

    newnode->next = temp->next;
    temp->next = newnode;

    if (newnode->next == NULL)
    {
        tail = newnode;
    }
}

void printing_node(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(15);
    Node *tail = new Node(25);

    head->next = a;
    a->next = tail;
    insert_at_any_pos(head, tail, 2, 20);
    insert_at_any_pos(head, tail, 10, 20);

    printing_node(head);

    return 0;
}