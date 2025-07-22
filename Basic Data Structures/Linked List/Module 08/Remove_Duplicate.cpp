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

void delete_duplicate(Node *&head)
{
    // if we can print sorted way then we can do like below

    // for (Node *i = head; i->next != NULL; i = i->next)
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         if (i->val > j->val)
    //         {
    //             swap(i->val, j->val);
    //         }
    //     }
    // }

    // Node *temp = head;

    // while (temp != NULL && temp->next != NULL)
    // {
    //     if (temp->val == temp->next->val)
    //     {
    //         Node *deletenode = temp->next;
    //         temp->next = temp->next->next;
    //         delete deletenode;
    //     }
    //     else
    //     {
    //         temp = temp->next;
    //     }
    // }

    // if we can't print sorted way then we can use: Loop Method O(n2);

    // for (Node *i = head; i != NULL; i=i->next)
    // {
    //     Node *j = i;
    //     while (j->next != NULL)
    //     {
    //         if (j->next->val == i->val)
    //         {
    //             Node *deletenode = j->next;
    //             j->next = j->next->next;
    //             delete deletenode;
    //         }
    //         else
    //         {
    //             j = j->next;
    //         }
    //     }
    // }

    for (Node *i = head; i != NULL; i=i->next)
    {
        
        for (Node *j = i; j->next != NULL;)
        {
            if (j->next->val == i->val)
            {
                Node *deletenode = j->next;
                j->next = j->next->next;
                delete deletenode;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    int val;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    delete_duplicate(head);

    print_linked_list(head);

    return 0;
}