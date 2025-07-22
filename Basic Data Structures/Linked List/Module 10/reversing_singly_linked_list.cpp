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

void linked_list_reverse(Node *&head, Node *&tail, Node *temp)
{   
    if (temp->next == NULL)
    {   
        head = temp;
        return;
    }
    linked_list_reverse(head,tail,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void print_linked_list(Node *head)
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

    linked_list_reverse(head,tail,head);
    print_linked_list(head);
    
    return 0;
}