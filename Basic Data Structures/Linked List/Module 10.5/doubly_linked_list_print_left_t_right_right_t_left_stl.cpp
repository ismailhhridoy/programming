#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> mylist)
{

    for (auto it : mylist) // here iterator will not return address because values are taking form the list.
    {
        cout << it << " ";
    }

    cout << endl;
}

void print_backward(list<int> mylist)
{
    mylist.reverse();

    for (auto it : mylist)
    {
        cout << it << " ";
    }

    cout << endl;
}

int main()
{
    list<int> mylist;

    int q;
    cin >> q;

    while (q--)
    {

        int pos;
        int val;
        cin >> pos >> val;

        int sz = mylist.size(); // counting size

        if (pos < 0 || sz < pos)
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            mylist.push_front(val); // add in the head
            print_forward(mylist);
            print_backward(mylist);
        }
        else if (pos == sz)
        {

            mylist.push_back(val); // add in the tail
            print_forward(mylist);
            print_backward(mylist);
        }
        else
        {
            auto it = next(mylist.begin(), pos); // giving address using iterator method. giving address becasue using begin function. It's a iterator
            mylist.insert(it, val); // inserting value in this address
            print_forward(mylist);
            print_backward(mylist);
        }
    }

    return 0;
}