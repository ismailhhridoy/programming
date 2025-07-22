#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b, c;  // Call first node head
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << endl;
    cout << (*a.next).val << endl; // here when we dereference *a.next (mean getting object b node) and .val mean getting object b node val.

    cout << a.next->val << endl; // short form of (*a.next).val (arrow)

    cout << a.next->next->val << endl;

    return 0;
}