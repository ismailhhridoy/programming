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

class myqueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) // 0(1)
    {   
        sz ++;
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

    void pop() // 0(1)
    {
        if (head == NULL) // List is empty
        {
            return;
        }
        sz--;
        Node *deletenode = head;
        head = head->next;
        delete deletenode;

        if (head == NULL) // If list is now empty after deletion, update tail as well
        {
            tail = NULL;
            return;
        }
    }

    int front() // 0(1)
    {
        return head->val;
    }
    
    int back() // 0(1)
    {
        return tail->val;
    }

    int size() // 0(1)
    {
        return sz;
    }

    bool empty() // 0(1)
    {        
        return head == NULL;
    }
};

int main()
{
    myqueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // cout << q.size() << " " << q.front() << " " << q.back() << " ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}