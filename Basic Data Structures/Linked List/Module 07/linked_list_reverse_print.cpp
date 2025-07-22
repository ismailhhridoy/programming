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

void linked_list_reverse(Node *temp)
{   
    if (temp == NULL)
    {
        return;
    }

    linked_list_reverse(temp->next);
    cout << temp->val << endl;    
    
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
    linked_list_reverse(head);
    
    return 0;
}