#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist;

    int val;
    while (cin >> val && val != -1)
    {
        mylist.push_back(val);
    }

    mylist.sort();

    for (int val : mylist)
    {
        cout << val << " ";
    }
    

    return 0;
}