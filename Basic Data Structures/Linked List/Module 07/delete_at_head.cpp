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

void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return;
    }    
    
    Node *deletenode = head;
    head = head->next;
    delete deletenode; 
    
    if (head == NULL)
    {
        tail == NULL;
    } 
    
}

void print_singly_linked_list(Node *head)
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
    int val;

    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> val)
    {
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);                
    }

    delete_at_head(head, tail);
    
    print_singly_linked_list(head);

    
    return 0;
}