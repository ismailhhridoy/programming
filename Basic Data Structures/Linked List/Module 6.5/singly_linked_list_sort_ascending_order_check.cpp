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

void linked_list_insert_at_tail(Node *&head, Node *&tail, int val)
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

void linked_list_ascending_sort(Node *head)
{
    Node *temp = head;

    bool is_sort = true;

    while (temp != NULL && temp->next != NULL)
    {

        if (temp->val > temp->next->val)
        {
            is_sort = false;
        }

        temp = temp->next;
    }

    if (is_sort)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    int val;

    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> val)
    {
        linked_list_insert_at_tail(head, tail, val);
    }

    linked_list_ascending_sort(head);

    return 0;
}