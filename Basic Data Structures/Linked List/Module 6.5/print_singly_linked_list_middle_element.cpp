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

void linked_list_mid(Node *head)
{
    Node *temp = head;

    int count = 0;

    while (temp != NULL)
    {   
        count ++;
        temp = temp->next;
    }

    temp = head;

    if (count == 0)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (count % 2 != 0)
    {
        int mid = count/2;
        
        for (int i = 0; i < mid; i++)
        {
            temp = temp->next;
        }
        
        cout << temp->val;        
    }
    else
    {
        int mid1 = count / 2 - 1;
        int mid2 = count / 2;
        for (int i = 0; i < mid1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " and " << temp->next->val << endl;
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

    linked_list_mid(head);

    return 0;
}