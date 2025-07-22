#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_pos(Node *&head, Node *&tail, int val, int pos)
{
    if (pos < 0)
    {
        cout << "Invalid Index" << endl;
        return;
    }
    
    Node *newnode = new Node(val); // Create new node with given value

    if (pos == 0) // inserting at head 1 time
    {
        if (head == NULL)
        { // List is empty, so head and tail both point to the new node
            head = newnode;
            tail = newnode;
            return;
        }
        // List is not empty
        newnode->next = head;
        head->prev = newnode;
        head = newnode;

        return;
    }

    // Traverse to the node just before the desired position

    Node *temp = head;

    for (int i = 0; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            // Position is invalid (greater than list length)
            cout << "Invalid Index" << endl;
            delete newnode; // Avoid memory leak
            return;
        }

        temp = temp->next;
    }

    // Link the new node into the list

    newnode->next = temp->next;
    if (temp->next != NULL)
    {
        // If we're not inserting at the end
        temp->next->prev = newnode;
    }
    else
    {
        // If inserting at the end, update tail
        tail = newnode;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    insert_at_pos(head, tail, 100, -10);
    insert_at_pos(head, tail, 100, 3);
    insert_at_pos(head, tail, 100, 10);

    print_forward(head);
    cout << endl;
    print_backward(tail);

    return 0;
}