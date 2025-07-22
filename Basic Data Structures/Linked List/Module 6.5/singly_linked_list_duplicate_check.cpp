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

void linked_list_dup(Node *head)
{
    
    bool is_dup = false;

    // loop method
    // for (Node *i = head; i != NULL; i= i->next)
    // {
    //     for (Node *j = i->next; j != NULL; j = j->next)
    //     {
    //         if (i->val == j->val)
    //         {
    //             is_dup = true;
    //             break;
    //         }
            
    //     }

    //     if (is_dup) break;
        
    // }


    // frquency method
    int freq[101] = {0};

    Node *temp = head;
    while (temp != NULL)
    {
        freq[temp->val]++;
        temp = temp->next;
    }

    for (int i = 0; i < 101; i++)
    {
        if (freq[i] > 1)
        {
            is_dup = true;
            break;
        }
        
    }    
    
    // Priting
    if (is_dup)
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

    linked_list_dup(head);

    return 0;
}