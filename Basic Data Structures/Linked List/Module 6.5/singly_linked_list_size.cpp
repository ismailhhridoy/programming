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

void linked_list_size(Node *&head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count ++;
        temp = temp->next;
    }

    cout << count;
    
}

int main()
{
    Node *head = new Node(5);
    Node *a = new Node(1);
    Node *b = new Node(4);
    Node *c = new Node(5);

    head->next = a;
    a->next = b;
    b->next = c;

    linked_list_size(head);

    return 0;
}