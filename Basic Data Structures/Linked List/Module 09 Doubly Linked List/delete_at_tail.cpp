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

void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL) //List is empty
    {
        return;
    }

    Node *deletenode = tail;
    tail = tail->prev;
    delete deletenode;

    if (tail == NULL) // If list is now empty after deletion, update head as well
    {
        head = NULL;
        return;
    }

    tail->next = NULL;
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

    delete_at_tail(head, tail);

    print_forward(head);

    return 0;
}