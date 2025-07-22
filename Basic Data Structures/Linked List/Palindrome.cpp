#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *prev;
    ListNode *next;

    ListNode(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_tail(ListNode *&head, ListNode *&tail, int val)
{
    ListNode *newnode = new ListNode(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print(ListNode *head, ListNode *tail, int val)
{

    for (ListNode *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    
}

int main()
{
    ListNode *head = NULL;
    ListNode *tail = NULL;

    int val;
    while (cin >> val && val != -1)
    {
        insert_tail(head, tail, val);
    }

    print(head, tail, val);

    return 0;
}