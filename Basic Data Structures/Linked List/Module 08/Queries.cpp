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

int size(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        size++;
    }

    return size;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void delete_at_pos(Node *&head, Node *&tail, int indx, int s)
{

    if (s <= indx || head == NULL)
    {
        return;
    }

    if (indx == 0)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;

        if (head == NULL)
        {
            tail == NULL;
        }
    }

    else
    {
        Node *temp = head;
        for (int i = 1; i < indx; i++)
        {
            temp = temp->next;
        }

        Node *deletenode = temp->next;
        temp->next = temp->next->next;

        if (temp->next == NULL)
        {
            tail = temp;
        }

        delete deletenode;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
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
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {

        int x;
        cin >> x;
        int v;
        cin >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else if (x == 2)
        {
            int s = size(head);
            delete_at_pos(head, tail, v, s);
        }

        print_linked_list(head);
    }

    return 0;
}