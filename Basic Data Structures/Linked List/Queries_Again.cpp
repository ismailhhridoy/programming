#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

int list_size(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }

    return size;
}

void print_forward(Node *head)
{
    cout << "L ->";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->val;
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R ->";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << " " << temp->val;
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_pos(Node *&head, Node *&tail, int val, int pos)
{
    int sz = list_size(head);
    if (pos < 0 || sz < pos)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newnode = new Node(val); // Create new node with given value

    if (pos == 0) // inserting at head 1 time
    {
        if (head == NULL)
        { // List is empty, so head and tail both point to the new node
            head = newnode;
            tail = newnode;
        }
        else
        {
            // List is not empty
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    else
    {
        // Traverse to the node just before the desired position

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
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

    print_forward(head);
    print_backward(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {

        int pos;
        int val;
        cin >> pos >> val;

        insert_at_pos(head, tail, val, pos);
    }

    return 0;
}