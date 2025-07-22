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

int size_linked_list(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    int input1_size = size_linked_list(head);

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (cin >> val && val != -1)
    {
        insert_at_tail(head2, tail2, val);
    }

    int input2_size = size_linked_list(head2);

    if (input1_size != input2_size)
    {
        cout << "NO" << endl;
    }
    else
    {
        Node *temp = head;
        Node *temp2 = head2;

        bool is_same = true;

        while (temp != NULL && temp2 != NULL)
        {
            if (temp->val != temp2->val)
            {
                cout << "NO" << endl;
                is_same = false;
                break;
            }

            temp = temp->next;
            temp2 = temp2->next;
        }

        if (is_same)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}