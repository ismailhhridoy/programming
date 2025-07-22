#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class mystack
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
        newnode->prev = tail;
        tail = newnode;
    }

    void pop() // 0(1)
    {
        if (head == NULL) // List is empty
        {
            return;
        }
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;

        if (tail == NULL) // If list is now empty after deletion, update head as well
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
    }

    int top() // 0(1)
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {        
        return head == NULL;
    }
};

int main()
{
    mystack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}