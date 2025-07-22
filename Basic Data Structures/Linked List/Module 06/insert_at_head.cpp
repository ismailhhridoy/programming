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

void insert_at_head(Node *&head, Node*&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    newnode->next = head;
    head = newnode;
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
    Node *tail = new Node(20);

    head->next = a;
    a->next = tail;
    insert_at_head(head, tail, 5);
    insert_at_head(head, tail, 4);
    insert_at_head(head, tail, 3);
    insert_at_head(head, tail, 2);
    insert_at_head(head, tail, 1);

    printing_node(head);

    return 0;
}