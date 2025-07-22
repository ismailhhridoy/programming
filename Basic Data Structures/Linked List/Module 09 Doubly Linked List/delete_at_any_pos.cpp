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

void delete_at_pos(Node *&head, Node *&tail, int pos)
{
    if (head == NULL) // List is empty
    {
        return;
    }

    // delete at head
    if (pos == 0)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;

        if (head == NULL) // If list is now empty after deletion, update tail as well
        {
            tail = NULL;
            return;
        }

        head->prev = NULL;

        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL || temp->next == NULL) // if pos go out of length
        {
            return;
        }

        temp = temp->next;
    }

    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;

    // If list is now empty after deletion, update tail as well
    if (temp->next == NULL)
    {
        tail = temp;
        return;
    }

    temp->next->prev = temp;
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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_pos(head, tail, 2);

    print_forward(head);

    return 0;
}