#include <bits/stdc++.h>
using namespace std;

int main()
{
    // It's doubly linked list library
    // constructors
    list<int> l;
    list<int> l2(10, 3); // with value
    list<int> l3 = {4,9,5,4,5};  // with maual value
    // cout << l2.size();
    // To print need iterator
    // cout << *l2.begin(); // To print iterator do dereference

    for (auto it = l2.begin(); it != l2.end(); it++) // printing using iterator
    {
        // cout << *it << endl;
    }

    // printing range based for loop (use it for linked list because there is no indexing here)

    for (int val : l2)
    {
        // cout << val << endl;
    }

    list<int> l4(l3); // copy another list  // we can also copy array and vector as well ar, ar+n ; v.begin(), v.end();
    for (int val : l4)
    {
        cout << val << endl;
    }

  

    return 0;
}